#ifndef VEHICULE_H
#define VEHICULE_H

class Vehicule
{
    public:
        Vehicule();
        Vehicule(int , double);
        virtual ~Vehicule();
        void affiche();
        double calculerPrix();
    protected:
        int anneeAchat;
        double prixAchat;
        double prixCourant;
    private:

};

#endif // VEHICULE_H
