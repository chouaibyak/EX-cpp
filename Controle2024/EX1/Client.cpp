#include "Client.h"
#include <iostream>
#include <string>
using namespace std;

Client::Client(int c){
    codeCleint = c;
}
void Client::setCode(int c){
    codeCleint = c;
}
int Client::getCode(){
    return codeCleint;
}

//====================Siege=========================

Siege::Siege(int n){
    numSiege = n;
}
bool Siege::libre(){
    if(occupe == true){
        return false;
    }else{
        return true;
    }
};

bool Siege::reserver(Client *c){
    if (occupe == false)
    {
        this->c = c;
        occupe = true;
        return true;
    }
    return false;
};

//==================Wagon======================
Wagon::Wagon(int n, int taille){
    numWagon = n;
    for(int i =1; i<=taille ; i++){
        listeSiege.push_back(Siege(i));
    }
}
Wagon::Wagon(int n){
    numWagon = n;
    for(int i =1; i<=10 ; i++){
        listeSiege.push_back(Siege(i));
    }
}
int Wagon::getNumWagon(){
    return numWagon;
}
bool Wagon::complet(){
    int taille = listeSiege.size();
    for(int i=0; i<taille; i++){
        if(listeSiege[i].libre()){
            return false;
        }
    }
    return true;
}
bool Wagon::reserverPlace(Client* c){
    int taille = listeSiege.size();
    for(int i=0; i<taille;i++){
        if(listeSiege[i].libre()){
            listeSiege[i].reserver(c);
            return true;
        }
    }
    return false;
}

//=================Train=====================

Train::Train(vector<Wagon *>  ls){
    listeWagon = ls;  
}
Wagon* Train::chercherWagon(int numeroWagon){
    //cherche un wagon par numero
    //envoie un pointeur vers le wagon trouve
    //si pas trouver envoyer 
    for(int i=0;i<listeWagon.size(); i++){
        if(listeWagon[i]->getNumWagon() == numeroWagon){
            return listeWagon[i];
        }
    }
    return nullptr;
}
bool Train::reserver(Client *c, int numeroWagon){
    //reserve siege pour client dans wagon
    //if wagon complet return false
    Wagon* w = chercherWagon(numeroWagon);
    if(!w->complet()){
        w->reserver(c);  
        return true;       
    }   
    return false;
}
bool Train::reserver(Client *c){
     for(int i=0; i<listeWagon.size(); i++){
        if(!listeWagon[i]->complet()){
            listeWagon[i]->reserver(c);   
            return true      
        }   
    }
    return false;
}
Train Train::joindre(const Train& autreTrain){
    vector<Wagon*> newListe = listeWagon; 
     for (int i = 0; i < autreTrain.listeWagon.size(); i++) {
        newListe.push_back(autreTrain.listeWagon[i]);
    }
    return Train(newListe); 
}
