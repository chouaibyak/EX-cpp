#ifndef CRAYONCOULEUR_H
#define CRAYONCOULEUR_H
#include "Crayon.h"
#include <string> 

class crayonCouleur : public Crayon{
private:
    string couleur;
public:
    crayonCouleur(double, double, string c = "noir");
    ~crayonCouleur();
    crayonCouleur& operator=(const crayonCouleur &crc);
    friend ostream & operator << (ostream & out, const crayonCouleur & crc);
    void setCouleur(string c);
    string getCouleur();
};

#endif