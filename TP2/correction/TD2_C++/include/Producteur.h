#ifndef PRODUCTEUR_H
#define PRODUCTEUR_H
#include <Employe.h>
using namespace std;

class Producteur :public Employe
{
    public:
        Producteur();
        Producteur(string &,string &,unsigned int,string &,,unsigned int);
        virtual ~Producteur();

    protected:
         unsigned int unites;
    private:
};

#endif // PRODUCTEUR_H
