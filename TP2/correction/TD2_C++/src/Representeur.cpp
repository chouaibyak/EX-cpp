#include "Representeur.h"
#include "Commercial.h"
#include "Employe.h"
#include<string>
#include<iostream>

using namespace std;

Representeur::Representeur(string &n,string &p,unsigned int a,string &d,double c):Commercial(n,p,a,d,c)
{}

Representeur::~Representeur()
{
    //dtor
}

string Representeur::getInfo()const {
      string chaine=Employe::getInfo()+ chiffre +"\n";
      return chaine;
}

double Representeur::salaire() const {
        double salaire;
        salaire=((chiffre*20)/100)+8000;
        return salaire;
}

