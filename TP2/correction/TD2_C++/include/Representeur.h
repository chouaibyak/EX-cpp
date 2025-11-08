#ifndef REPRESENTEUR_H
#define REPRESENTEUR_H
#include "Commercial.h"
#include<string>
#include<iostream>

using namespace std;

class Representeur:public Commercial
{
    public:
        Representeur(string &,string &,unsigned int,string &,double);
        virtual ~Representeur();
        string getInfo()const;
        double salaire () const;

    protected:

    private:
};

#endif // REPRESENTEUR_H
