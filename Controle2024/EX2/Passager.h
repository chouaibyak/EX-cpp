#ifndef PASSAGER_H
#define PASSAGER_H
#include <string>
#include <iostream>
using namespace std;

class Passager{
private:
    string nom;
    string numpass;
    string classRes; //Economique, Business, Premiere
public:
    Passager(string, string, string);
    virtual float calculerPrix() const =0;
    //pour chaque passager
};

class PassagerEconomique : public Passager {
public:
    PassagerEconomique(string n, string np)
        : Passager(n, np, "Economique") {}
    float calculerPrix() const  {
         return 1000; 
        }
};
class PassagerBusiness : public Passager {
public:
    PassagerBusiness(string n, string np)
        : Passager(n, np, "Business") {}
    float calculerPrix() const {
         return 3000; 
        }
};

class PassagerPremiere : public Passager {
public:
    PassagerPremiere(string n, string np)
        : Passager(n, np, "Première") {}
    float calculerPrix() const {
         return 5000; 
        }
};

#endif