#include "Employe.h"
#include <string>
#include <iostream>

using namespace std;

Employe::Employe()
{

}

Employe::~Employe(){}

Employe::Employe(const string& n,const string& p,int ag,const string& d): nom(n),prenom(p),age(ag),date(d)
{

}

string Employe::getInfo() const{
      return nom+" "+prenom+" "+date;
}

//commercial
Commercial::Commercial(const string& n, const string& p, int ag,const string& d, const double ca):Employe(n,p,ag,d),chiffre(ca)
{

}

//vendeur
Vendeur::Vendeur(const string& n, const string& p,int ag,const string& d,const double ca):Commercial(n,p,ag,d,ca)
{

}

string Vendeur::getInfo() const{
    return "Vendeur "+Employe::getInfo();
}

double Vendeur::salaire()const{
    return (0.2*chiffre)+4000;
}

//representant

Representant::Representant(const string& n, const string& p,int ag,const string& d,const double ca):Commercial(n,p,ag,d,ca)
{

}

string Representant::getInfo() const{
    return "Representant "+Employe::getInfo();
}

double Representant::salaire()const{
    return (0.2*chiffre)+8000;
}

//Producteur
Producteur::Producteur(const string& n, const string& p,int ag ,const string& d, unsigned u):Employe(n,p,ag,d),nbre_unites(u)
{

}

string Producteur::getInfo() const{
    return "Producteur "+Employe::getInfo();
}

double Producteur::salaire()const{
    return 5.0*nbre_unites;
}

//Manutentionnaire

Manutentionnaire::Manutentionnaire(const string& n, const string& p,int ag ,const string& d, unsigned h):Employe(n,p,ag,d),nbre_heures(h)
{

}

string Manutentionnaire::getInfo() const{
    return "Manutentionnaire "+Employe::getInfo();
}

double Manutentionnaire::salaire()const{
    return 650.0*nbre_heures;
}

//Risque

Risque::Risque(double p=1500):prime(p)
{

}

Risque::~Risque()
{

}

//ProducteurARisque

ProducteurARisque::ProducteurARisque(const string& n, const string& p,int ag,const string& d, unsigned u,const double prim):Producteur(n,p,ag,d,u),Risque(prim)
{

}

string ProducteurARisque::getInfo() const{
    return "ProducteurARisque "+Employe::getInfo();
}

double ProducteurARisque::salaire()const{
    return Producteur::salaire()+prime;
}

//ManutentionnaireARisque
ManutentionnaireARisque::ManutentionnaireARisque(const string& n, const string& p,int ag,const string& d, unsigned h,const double prim):Manutentionnaire(n,p,ag,d,h),Risque(prim)
{

}

string ManutentionnaireARisque::getInfo() const{
    return "ManutentionnaireARisque "+Employe::getInfo();
}

double ManutentionnaireARisque::salaire()const{
    return Manutentionnaire::salaire()+prime;
}


