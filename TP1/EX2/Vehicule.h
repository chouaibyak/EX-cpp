#ifndef VEHICULE_H
#define VEHICULE_H

class Vehicule 
{
protected:
    int anneeAchat;
    double prixAchat, prixCourant;

public:
    void afficher();
    double calculerPrix();

    // constructeurs
    Vehicule();
    Vehicule(int , double );
    virtual ~Vehicule();
};

#endif
