#include "Producteur.h"
#include "Commercial.h"
#include "Employe.h"
#include<string>
#include<iostream>

using namespace std;

Producteur::Producteur()
{
    //ctor
}

Producteur::~Producteur()
{
    //dtor
}

Producteur::Producteur(string &n,string &p,unsigned int a,string &d,double c,unsigned int u):Commercial(n,p,a,d,c),unites(u)
{}

string Producteur::getInfo()const {
      string chaine=Employe::getInfo()+ chiffre +"\t" + unites+"\n";
      return chaine;

}

double Producteur::salaire() const {
        double salaire;
        salaire= unites*5;
        return salaire;
}


