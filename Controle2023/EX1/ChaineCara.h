#ifndef CHAINECARA_H
#define CHAINECARA_H

#include <iostream>
#include <string>

using namespace std;

class ChaineCara {
protected:
    int longueur;
    char* adr;
public:
    ChaineCara();
    ChaineCara(char *texte);
    ChaineCara(const ChaineCara &ch);
    virtual ~ChaineCara();
    void affiche();

    //operateur
    ChaineCara& operator=(const ChaineCara &ch); //affectation
    bool operator==(const ChaineCara &ch); //comparaison
    ChaineCara operator+(const ChaineCara &ch); //concatenation
    char& operator[](int i); //lecture/ecriture
    const char& operator[](int i) const; //lecture seulment
    // & → je renvoie le même objet (référence).
    //sans & → je renvoie une copie (nouvel objet).
};

 #endif
