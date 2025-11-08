#include "Personnel.h"
#include <iostream>
using namespace std;

Personnel::Personnel():listeEmployes()
{
    //ctor
}

Personnel::~Personnel()
{
    vider();
}

unsigned Personnel::size() const
{
    return listeEmployes.size();
}

bool Personnel::charger(const string& fichier)
{
    ifstream flux(fichier.c_str());
    //is used to create an input file stream object
    //named flux and associate it with a file whose
    //name in provided by the fichier variable
    if(!flux){
        return false;
    }
    char c;
    while(flux>>c)
    {   //or while(flux.get(c))
        //read characters from the input file flux and stores in the variable c
        //until the end of the file(EOF) is reached.
        switch (c)
        {
            case 'V':case 'v':ajouterCommercial<Vendeur>(flux);break;
            case 'R':case 'r':ajouterCommercial<Representant>(flux);break;
            case 'P':case 'p':ajouterEmploye<Producteur>(flux);break;
            case 'M':case 'm':ajouterEmploye<Manutentionnaire>(flux);break;
            case 'A':case 'a':ajouterEmployeArisque<ProducteurARisque>(flux);break;
            case 'N':case 'n':ajouterEmployeArisque<ManutentionnaireARisque>(flux);break;
            default:
                cerr <<"erreur de chargement des donnees"<<endl;//afficher error
        }
    }
    flux.ignore();//Permet d'ignorer certaines donnees que le tompon flux contient.
    return true;
}

void Personnel::ajouter(Employe *e)
{
    listeEmployes.push_back(e);
}

void Personnel::calculer() const
{
   if(listeEmployes.empty())
    return;
   double sommeSalaire=0.0;
   const unsigned n=size();
   for(unsigned i;i<n;i++)
   {
       cout<< listeEmployes[i]->getInfo()<<endl;
       double s=listeEmployes[i]->salaire();
       cout<<"salaire: "<<s<<endl;
       sommeSalaire+=s;
   }

   //calculer la moyenne
   cout<< "Total salaire: "<<sommeSalaire<<endl;
   cout<<"Nombre des employes: "<<n<<endl;
   cout<<"Salaire moyen: "<<sommeSalaire/n<<endl;

}

void Personnel::vider()
{
    for(unsigned i;i<size();i++)
    {
        delete listeEmployes[i];
        listeEmployes[i]=0;
    }
    listeEmployes.clear();
}

template<typename T>
  bool ajouterCommercial(istream& flux)
      {
          Employe *e;
          string n,p,d;
          int a;
          double ca;
          if(flux>>n>>p>>a>>d>>ca)
            //store into variable
            {
                ajouter(e=new T(n,p,a,d,ca));
            }
            return flux.good();
      }

template<typename T>
  bool ajouterEmploye(istream& flux)
      {
          Employe *e;
          string n,p,d;
          int a;
          unsigned u;
          if(flux>>n>>p>>a>>d>>u)
            //store into variable
            {
                ajouter(e=new T(n,p,a,d,u));
            }
            return flux.good();
      }

template<typename T>
  bool ajouterEmployeArisque(istream& flux)
      {
          Employe *e;
          string n,p,d;
          int a;
          unsigned u;
          double prime;
          if(flux>>n>>p>>a>>d>>u>>prime)
            //store into variable
            {
                ajouter(e=new T(n,p,a,d,u,prime));
            }
            return flux.good();
      }
