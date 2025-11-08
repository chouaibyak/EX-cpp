#ifndef VOITURE_H
#define VOITURE_H

#include "Vehicule.h"
#include <iostream>

using namespace std;

class Voiture : public Vehicule {
    private:
        int nombrePortes;
        double puissance, kilometrage;
    public:
        //constracteur
        Voiture();
        Voiture(int annee, double prix, int portes, double cv, double km);

        //methode
        void affiche();
        double calculePrix();
};

#endif
