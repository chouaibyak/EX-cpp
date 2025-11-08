#ifndef CHAINEDERIVEE_H
#define CHAINEDERIVEE_H

#include "ChaineCara.h"
#include <iostream>
using namespace std;

class ChaineDerivee : public ChaineCara {
private:
    int type;
    float val;
public:
    ChaineDerivee();
    ChaineDerivee(char *);
    void affiche();
    ChaineDerivee(const ChaineDerivee &chd);
    void calcule(); 
};

#endif