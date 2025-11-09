#include <iostream>
#include <string>
#include <vector>
#include "Vol.h"
#include "CampagnieAerienne.h"
using namespace std;

void CampagnieAerienne::ajouterVol(Vol *vol){
    listeVol.push_back(vol);
}
void CampagnieAerienne::afficherVols() const{
    for(int i=0; i<listeVol.size(); i++){
        listeVol[i]->afficher();
    }
}
bool CampagnieAerienne::verifierDisponibiliteVol(const string& numeroVol){
   for(int i=0; i<listeVol.size(); i++){
    if(listeVol[i]->getNumero() == numeroVol){
        listeVol[i]->estDisponible();
    }
   }
}
