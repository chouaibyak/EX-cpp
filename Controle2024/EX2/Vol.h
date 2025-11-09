#ifndef VOL_H
#define VOL_H
#include <string>
#include <iostream>
using namespace std;

class Vol{
private:
    string numero;
    string destination;
    string dateDepart;
    int nmbrSieges;
    int nmbrTotalSieges;
public:
    Vol(string, string, string, int, int);
    bool estDisponible() const;
    void afficher() const;
    int getNumero();
};

#endif