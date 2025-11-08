#include "ex1.h"
using namespace std;

// =================== Employe ===================
Employe::Employe(const string& n, const string& p, int a, const string& d) {
    nom = n;
    prenom = p;
    age = a;
    dateEntrer = d;
}

string Employe::getInfo() const {
    return "Employe [Nom: " + nom + ", Prenom: " + prenom +
           ", Age: " + to_string(age) + ", Date: " + dateEntrer + "]";
}

Employe::~Employe() {}

// =================== Comercial ===================
Comercial::Comercial(const string& n, const string& p, int a, const string& d, double c)
    : Employe(n, p, a, d) {
    chiffre_a = c;
}

// =================== Vendeur ===================
Vendeur::Vendeur(const string& n, const string& p, int a, const string& d, double c)
    : Comercial(n, p, a, d, c) {}

double Vendeur::Salaire() const {
    return 0.2 * chiffre_a + 4000;
}

string Vendeur::getInfo() const {
    return Employe::getInfo() + " | Vendeur salaire = " + to_string(Salaire()) + " DH.";
}

// =================== Representant ===================
Representant::Representant(const string& n, const string& p, int a, const string& d, double c)
    : Comercial(n, p, a, d, c) {}

double Representant::Salaire() const {
    return 0.2 * chiffre_a + 2000;
}

string Representant::getInfo() const {
    return Employe::getInfo() + " | Representant salaire = " + to_string(Salaire()) + " DH.";
}

// =================== Producteur ===================
Producteur::Producteur(const string& n, const string& p, int a, const string& d, unsigned unite)
    : Employe(n, p, a, d) {
    nbr_unites = unite;
}

double Producteur::Salaire() const {
    return nbr_unites * 5.0;
}

string Producteur::getInfo() const {
    return Employe::getInfo() + " | Producteur salaire = " + to_string(Salaire()) + " DH.";
}

// =================== Manutentionnaire ===================
Manutentionnaire::Manutentionnaire(const string& n, const string& p, int a, const string& d, unsigned h)
    : Employe(n, p, a, d) {
    nbre_heure = h;
}

double Manutentionnaire::Salaire() const {
    return nbre_heure * 65.0;
}

string Manutentionnaire::getInfo() const {
    return Employe::getInfo() + " | Manutentionnaire salaire = " + to_string(Salaire()) + " DH.";
}

// =================== Risque ===================
Risque::Risque(double p) {
    prime_risque = p;
}

Risque::~Risque() {}

// =================== ProducteurARisque ===================
ProducteurARisque::ProducteurARisque(const string& n, const string& p, int a, const string& d, unsigned unite, double prime)
    : Producteur(n, p, a, d, unite), Risque(prime) {}

double ProducteurARisque::Salaire() const {
    return Producteur::Salaire() + prime_risque;
}

string ProducteurARisque::getInfo() const {
    return Producteur::getInfo() + " | (avec risque) salaire = " + to_string(Salaire()) + " DH.";
}

// =================== ManutentionnaireARisque ===================
ManutentionnaireARisque::ManutentionnaireARisque(const string& n, const string& p, int a, const string& d, unsigned h, double prime)
    : Manutentionnaire(n, p, a, d, h), Risque(prime) {}

double ManutentionnaireARisque::Salaire() const {
    return Manutentionnaire::Salaire() + prime_risque;
}

string ManutentionnaireARisque::getInfo() const {
    return Manutentionnaire::getInfo() + " | (avec risque) salaire = " + to_string(Salaire()) + " DH.";
}

// =================== Personne ===================
Personne::Personne() {}

Personne::~Personne() {
    vider();
}

size_t Personne::size() const {
    return employes.size();
}

void Personne::ajouter(Employe* e) {
    employes.push_back(e);
}

bool Personne::charger(const string& fn) {
    ifstream flux(fn.c_str());

    char c;
    while (flux >> c) {
        cout << "type lu :" << c << "'" << endl;
        switch (c) {
        case 'V': case 'v': ajouterCommercial<Vendeur>(flux);
            break;
        case 'R': case 'r': ajouterCommercial<Representant>(flux);
            break;
        case 'P': case 'p': ajouterEmploye<Producteur>(flux);
            break;
        case 'M': case 'm': ajouterEmploye<Manutentionnaire>(flux);
            break;
        case 'A': case 'a': ajouterEmployeArisque<ProducteurARisque>(flux);
            break;
        case 'N': case 'n': ajouterEmployeArisque<ManutentionnaireARisque>(flux);
            break;
        default:
            cerr << "Erreur de chargement des donnees" << endl;
            break;
        }
        flux.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    return true;
}

void Personne::calculer() {
    if (employes.empty()) {
        return;
    }
    double sommeSalaire = 0.0;
    const unsigned n = size();
    for (unsigned i = 0; i < n; i++) {
        cout << employes[i]->getInfo() << endl;
        double s = employes[i]->Salaire();
        cout << "salaire : " << s << endl;
        sommeSalaire += s;
    }
    cout << "total salaire : " << sommeSalaire << endl;
    cout << "salaire moyen : " << sommeSalaire / n << endl;
}

void Personne::vider() {
    for (unsigned i = 0; i < size(); i++) {
        delete employes[i];
        employes[i] = 0;
    }
    employes.clear();
}

// =================== Templates ===================
template<typename T>
bool Personne::ajouterCommercial(istream& flux)
{
    Employe *e;
    string n,p,d;
    int a;
    double ca;
    if(flux >> n >> p >> a >> d >> ca)
    {
        ajouter(e = new T(n,p,a,d,ca));
        return flux.good();
    }
    return false;
}

// Ajouter un Employe simple
template<typename T>
bool Personne::ajouterEmploye(istream& flux)
{
    Employe *e;
    string n, p, d;
    int a;
    unsigned u;
    if (flux >> n >> p >> a >> d >> u) // lecture des valeurs
    {
        ajouter(e = new T(n, p, a, d, u)); // création et ajout
        return flux.good();
    }
    return false;
}

// Ajouter un Employe à risque
template<typename T>
bool Personne::ajouterEmployeArisque(istream& flux)
{
    Employe *e;
    string n, p, d;
    int a;
    unsigned u;
    double prime;
    if (flux >> n >> p >> a >> d >> u >> prime) // lecture des valeurs
    {
        ajouter(e=new T(n, p, a, d, u, prime)); // création et ajout
        return flux.good();
    }
    return false;
}