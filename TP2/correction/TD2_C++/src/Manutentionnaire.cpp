#include "Manutentionnaire.h"

#include "Employe.h"
#include<string>
#include<iostream>

using namespace std;

Manutentionnaire::Manutentionnaire()
{
    //ctor
}

Manutentionnaire::~Manutentionnaire()
{
    //dtor
}

Manutentionnaire::Manutentionnaire(string &n,string &p,unsigned int a,string &d,unsigned int h):Employe(n,p,a,d),heures(h)
{}

string Manutentionnaire::getInfo()const {

      string chaine=Employe::getInfo()+ chiffre +"\t" + heures+"\n";
      return chaine;
}

double Representeur::salaire() const {
        double salaire;
        salaire=heures*650;
        return salaire;
}

