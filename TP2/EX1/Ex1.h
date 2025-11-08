#ifndef EX1_H
#define EX1_H

#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <limits> // ajouté pour std::numeric_limits
using namespace std;

// ========================== Employe ==========================
class Employe {
protected:
    string nom;
    string prenom;
    int age;
    string dateEntrer;

public:
    Employe(const string&, const string&, int, const string&);
    virtual string getInfo() const; 
    virtual double Salaire() const = 0; 
    virtual ~Employe();
};

// ========================== Comercial ==========================
class Comercial : public Employe {
protected:
    double chiffre_a;
public:
    Comercial(const string&, const string&, int, const string&, double);
};

// ========================== Vendeur ==========================
class Vendeur : public Comercial {
public:
    Vendeur(const string&, const string&, int, const string&, double);
    virtual double Salaire() const override;
    virtual string getInfo() const override;
};

// ========================== Representant ==========================
class Representant : public Comercial {
public:
    Representant(const string&, const string&, int, const string&, double);
    virtual double Salaire() const override;
    virtual string getInfo() const override;
};

// ========================== Producteur ==========================
class Producteur : public Employe {
protected:
    unsigned nbr_unites;
public:
    Producteur(const string&, const string&, int, const string&, unsigned);
    virtual double Salaire() const override;
    virtual string getInfo() const override;
};

// ========================== Manutentionnaire ==========================
class Manutentionnaire : public Employe {
protected:
    unsigned nbre_heure;
public:
    Manutentionnaire(const string&, const string&, int, const string&, unsigned);
    virtual double Salaire() const override;
    virtual string getInfo() const override;
};

// ========================== Risque ==========================
class Risque {
protected:
    double prime_risque;
public:
    Risque(double p = 1500);
    virtual ~Risque();
};

// ========================== ProducteurARisque ==========================
class ProducteurARisque : public Producteur, public Risque {
public:
    ProducteurARisque(const string&, const string&, int, const string&, unsigned, double p = 1500);
    virtual double Salaire() const override;
    virtual string getInfo() const override;
};

// ========================== ManutentionnaireARisque ==========================
class ManutentionnaireARisque : public Manutentionnaire, public Risque {
public:
    ManutentionnaireARisque(const string&, const string&, int, const string&, unsigned, double p = 1500);
    virtual double Salaire() const override;
    virtual string getInfo() const override;
};

// ========================== Personne ==========================
class Personne {
private:
    vector<Employe*> employes;
public:
    Personne();
    ~Personne();
    size_t size() const;
    void ajouter(Employe* e);
    bool charger(const string& fn);
    void calculer();
    void vider();

    template<typename T>
    bool ajouterEmploye(istream& flux);

    template<typename T>
    bool ajouterCommercial(istream& flux);

    template<typename T>
    bool ajouterEmployeArisque(istream& flux);
};

#endif
