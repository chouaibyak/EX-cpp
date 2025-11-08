#include "ChaineCara.h"
#include "iostream"

ChaineCara::ChaineCara(){};
ChaineCara::ChaineCara(char *texte){
    longueur=0;
    while(texte[longueur] != '\0'){
        longueur++;
    }
    adr = new char[longueur+1];
    for(int i=0; i<longueur;i++){
        adr[i] = texte[i];
    }
    adr[longueur] = '\0'; 
    
}
ChaineCara::ChaineCara(const ChaineCara &ch){
    longueur = ch.longueur;
    adr = new char[longueur+1];
    for(int i=0; i<longueur;i++){
        adr[i] = ch.adr[i];
    }
}
ChaineCara::~ChaineCara(){
    delete[] adr;
}
void ChaineCara::affiche(){
    cout<<adr<<endl;
}

//operator
ChaineCara& ChaineCara::operator=(const ChaineCara &ch){
    delete[] adr;
    longueur = ch.longueur;
    adr = new char[longueur];
    for(int i=0; i<longueur; i++){
        adr[i] = ch.adr[i];
    }
    return *this;
    
}

bool ChaineCara::operator==(const ChaineCara &ch){
    if(longueur != ch.longueur){
        return false;
    }
    for(int i=0; i<longueur; i++){
        if(adr[i] != ch.adr[i])
        return false;
    }
    return true;
}
ChaineCara ChaineCara::operator+(const ChaineCara &ch){
    ChaineCara temp;
    temp.longueur = longueur + ch.longueur;
    temp.adr = new char[temp.longueur + 1];
    
    for (int i = 0; i < longueur; i++)
        temp.adr[i] = adr[i];
    for (int j = 0; j < ch.longueur; j++)
        temp.adr[longueur + j] = ch.adr[j];
    
    return temp;
}
char& ChaineCara::operator[](int i){
    if(i<0 || i>=longueur){
        cerr << "Erreur: index hors limitte"<<endl;
        exit(1);
    }
    return adr[i];
}

const char& ChaineCara::operator[](int i)const{
    if(i<0 || i>=longueur){
        cerr << "Erreur: index hors limitte "<<endl;
        exit(1);
    }
    return adr[i];
}