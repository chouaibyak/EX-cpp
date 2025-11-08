#ifndef VENDEUR_H
#define VENDEUR_H
#include "Commercial.h"
#include<string>
#include<iostream>

using namespace std;

class Vendeur : public Commercial
{
    public:
        Vendeur(string &,string &,unsigned int,string &)
        virtual ~Vendeur();
        string getInfo()const;
        double salaire () const;

    protected:

    private:
};

#endif // VENDEUR_H
