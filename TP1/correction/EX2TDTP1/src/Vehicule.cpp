
#include<iostream>
using namespace std;
#include "Vehicule.h"

Vehicule::Vehicule()
{
    //ctor
}

Vehicule::~Vehicule()
{
    //dtor
}

 Vehicule::Vehicule(int an, double p){
     anneeAchat=an;
     prixAchat=p;
     prixCourant=p;
 }

void  Vehicule::affiche(){
    cout<"Année achat:"<<anneeAchat<<"prix achat :"<<prixAchat<< "prix courant :"<<prixCourant<<endl;
}

void  Vehicule::calculerPrix(){
    prixCourant=(1.0-(2015-anneeAchat)*.01)*prixAchat;
}
