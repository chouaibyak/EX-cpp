#ifndef VOITURE_H
#define VOITURE_H


class Voiture : public Vehicule
{
    public:
        Voiture();
        Voiture(int, double, int, double, double);
        virtual ~Voiture();
        void affiche();
        double calculerPrix();

    protected:
       int nombrePortes;
       double puissance;
       double kilometrage;
    private:
};

#endif // VOITURE_H
