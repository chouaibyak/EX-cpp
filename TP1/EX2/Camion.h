#ifndef CAMION_H
#define CAMION_H

#include <iostream>
#include "Vehicule.h"
using namespace std;

class Camion : public Vehicule
{
private:
    int volume;
public:
    //constracteur
    Camion();
    Camion(int annee, double prix, int vol);

    //Methode
    void afficher();
    double calculePrix();
};

#endif