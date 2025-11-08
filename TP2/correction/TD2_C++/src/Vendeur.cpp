#include "Vendeur.h"
#include "Commercial.h"
#include "Employe.h"
#include<string>
#include<iostream>

using namespace std;

Vendeur::Vendeur(string &n,string &p,unsigned int a,string &d,double c):Commercial(n,p,a,d,c)
{}

Vendeur::~Vendeur()
{
    //dtor
}

string Vendeur::getInfo()const {
      string chaine=Employe::getInfo()+ chiffre +"\t" + heures+"\n";
      return chaine;
}

double Vendeur::salaire() const {
        double salaire;
        salaire=((chiffre*20)/100)+4000;
        return salaire;
}
