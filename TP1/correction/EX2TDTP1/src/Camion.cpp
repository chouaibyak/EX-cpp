
#include<iostream>
using namespace std;

#include "Camion.h"

Camion::Camion()
{
    //ctor
}

Camion::~Camion()
{
    //dtor
}

Camion::Camion(int annee, double prix, int vol):Vehicule(annee,prix){
 volume=vol;
}

void  Camion::affiche(){
    Vehicule::affiche();
    cout<"vomule:"<<volume<<endl;
}

void  Camion::calculerPrix(){
    prixCourant=(1.0-(0.1*volume/1000))*prixAchat;
}
