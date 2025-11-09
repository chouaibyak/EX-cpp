#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H
using namespace std;
#include "Ouvrage.h"
#include <string>
#include <iostream>
#include <vector>

class Bibliotheque{
private:
    vector<Ouvrage *> listeOuvrage;
public:
    Bibliotheque();
    void affiche();
    double prixTotal();
    int recherche(int c);
    void ajouter(Ouvrage *o);
    void diminuerNbExp(int c, int n);
    void augmenterNBEXP(int c, int n);
};

#endif