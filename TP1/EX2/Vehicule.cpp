#include "Vehicule.h"
#include "iostream"
using namespace std;


//constracteur

Vehicule::Vehicule(){
 
}

Vehicule::~Vehicule()
{
}

Vehicule::Vehicule(int annee, double prix){
    anneeAchat = annee;
    prixAchat = prix ;
}


//Methode

void Vehicule::afficher(){
    cout << "Vehicule[anne: " <<anneeAchat << " prixAchat : " << prixAchat << " prixCourant : "<<prixCourant<< " ]" << endl;
}

double Vehicule::calculerPrix(){
    prixCourant = (1-((2015 - anneeAchat) * 0.01))* prixAchat;
    return prixCourant;
}