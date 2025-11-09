#include "Ouvrage.h"
#include <string>
#include <iostream>
using namespace std;

Ouvrage::Ouvrage(){
    code = 0;
    titre = "Inconnu";
    nbrExemplaire = 0;
    prixUnitaire = 0.0;
}

Ouvrage::Ouvrage(int c, const string &t, int nbrEx, double prix){
    code = c;
    titre = t;
    nbrExemplaire = nbrEx;
    prixUnitaire = prix;
}
//getters
int Ouvrage::getCode(){
    return code;
}
string Ouvrage::getTitre(){
    return titre;
}
int Ouvrage::getNbrExemplaire(){
    return nbrExemplaire;
}
double Ouvrage::getPrixUnitaire(){
    return prixUnitaire;
}
//setters
void Ouvrage::setCode(int c){code =c;}
void Ouvrage::setTitre(string t){titre = t;}
void Ouvrage::setNbrExemplaire(int nbrEx){nbrExemplaire = nbrEx;}
void Ouvrage::setPrixUnitaire(double prix){prixUnitaire = prix;}

void Ouvrage::affiche(){
    cout<< "Ouvrage[code: "<<code<<" titre: "<<titre<<" nbrExemplaire: "<<nbrExemplaire<<" prixUnitaire: "<<prixUnitaire<<endl;
}
double Ouvrage::totalOuvrage(){
    return nbrExemplaire * prixUnitaire;
}