#include "Bibliotheque.h"
#include <string>
#include <iostream>
using namespace std;

Bibliotheque::Bibliotheque(){

}   
void Bibliotheque::affiche(){
    int taille = listeOuvrage.size();
    for(int i=0; i<taille;i++){
        cout << "==========ouvre "<<i<<" ============"<<endl;
        listeOuvrage[i]->affiche();
        cout << "prix de stock : "<< listeOuvrage[i]->totalOuvrage() <<endl;
    }
    
}
double Bibliotheque::prixTotal(){
    double s =0;
    int taille = listeOuvrage.size();
    for(int i=0; i<taille; i++){
        cout<<"nombre exemplaire ouvre: "<<i<<listeOuvrage[i]->getNbrExemplaire()<<endl;
        s+=listeOuvrage[i]->totalOuvrage();
    }
    return s;
}
int Bibliotheque::recherche(int c){
    int taille = listeOuvrage.size();
    for(int i=0; i<taille; i++){
        if(listeOuvrage[i]->getCode()==c){
            return i;
        }
    }
    return -1;
}
void Bibliotheque::ajouter(Ouvrage *o){
    listeOuvrage.push_back(o);
}
void Bibliotheque::diminuerNbExp(int c, int n){
    int pos = recherche(c);
    if(pos!= -1){
        int actuel = listeOuvrage[pos]->getNbrExemplaire();
        int nv = actuel - n;
        listeOuvrage[pos]->setNbrExemplaire(nv);
    }
}
void Bibliotheque::augmenterNBEXP(int c, int n){
  int pos = recherche(c);
    if(pos!= -1){
        int actuel = listeOuvrage[pos]->getNbrExemplaire();
        int nv = actuel + n;
        listeOuvrage[pos]->setNbrExemplaire(nv);
    }
}