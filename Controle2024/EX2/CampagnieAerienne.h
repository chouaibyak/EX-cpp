#ifndef CAMPAGNIEAERIENNE_H
#define CAMPAGNIEAERIENNE_H
#include <iostream>
#include <string>
#include <vector>
#include "Vol.h"
using namespace std;

class CampagnieAerienne{
private:
    vector<Vol *> listeVol;
public:
    void ajouterVol(Vol* vol);
    void afficherVols() const;
    bool verifierDisponibiliteVol(const string& numeroVol);
}

#endif