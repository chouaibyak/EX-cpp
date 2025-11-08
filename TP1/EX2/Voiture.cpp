#include "Voiture.h"
#include "Vehicule.h"

using namespace std;

Voiture::Voiture():Vehicule(){
    int nombrePortes = 0;
    double puissance = 0;
    double kilometrage = 0;
}

Voiture::Voiture(int annee, double prix, int portes, double cv, double km)
    :Vehicule(annee, prix){
        nombrePortes = portes;
        puissance = cv;
        kilometrage = km;
}

//methode 
void Voiture::affiche(){
    Vehicule::afficher();
    cout << "Voiture [ portes : " << nombrePortes << "puissance : " << puissance  << "kilometrage : " << kilometrage <<  endl;
}


double Voiture::calculePrix(){
    prixCourant = (1 - ((2015 - anneeAchat) * 0.02 + 0.05 * kilometrage / 1000)) * prixAchat;
    return prixCourant;
}
  

