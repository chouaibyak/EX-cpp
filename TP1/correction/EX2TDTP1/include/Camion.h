#ifndef CAMION_H
#define CAMION_H


class Camion : public  Vehicule {
    public:
        Camion();
        virtual ~Camion();
        Camion(int, double, int);
        void affiche();
        double calculerPrix();
    protected:
    int volume;
    private:
};

#endif // CAMION_H
