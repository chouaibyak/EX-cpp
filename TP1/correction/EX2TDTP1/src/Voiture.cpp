#include "Voiture.h"

Voiture::Voiture()
{
    //ctor
}

Voiture::~Voiture()
{
    //dtor
}

Voiture::Voiture(int annee, double prix, int nbrportes, double puiss, double km):Vehicule(annee, prix) {
    nombrePortes=nbrportes;
    puissance=puiss;
    kilometrage=km;
}


void  Voiture::affiche(){
    Vehicule::affiche();
    cout<"Nombre de portes:"<<nombrePortes<<"Puissance :"<<puissance<<"kilometrage :"<<kilometrage<<endl;
}

void  Voiture::calculerPrix(){
    prixCourant=(1.0-((2015-anneeAchat)*0.02+0.05*kilometrage/10000))*prixAchat;
}
