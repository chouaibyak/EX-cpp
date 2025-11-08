#include "iostream"
#include "Camion.h"
#include "Vehicule.h"
// #include "Vehicule.h"
using namespace std;

Camion::Camion():Vehicule(){
    int volume = 0;
}

Camion::Camion(int annee, double prix, int vol)
    :Vehicule(annee, prix){
    int volume = vol;
}

//methode

void Camion::afficher(){
    Vehicule::afficher();
    cout << "type : camion" << endl;
    cout << "volume : " << volume << endl;
}

double Camion::calculePrix(){
    prixCourant = (1 - (0.1 * volume/1000)) * prixAchat;
    return prixCourant;
}
