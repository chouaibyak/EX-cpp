#include "Crayon.h"
#include <iostream>

using namespace std;

Crayon::Crayon(double l, double d){
    longueur = l;
    diametre = d;
}

Crayon::Crayon(const Crayon &cr){
    longueur = cr.longueur;
    diametre = cr.diametre;
}
Crayon::~Crayon(){}

Crayon& Crayon::operator=(const Crayon &cr){
    longueur = cr.longueur;
    diametre = cr.diametre;
    return *this;
}

 void Crayon::setLong(double l){
    longueur = l;
}

void Crayon::setDia(double d){
    diametre = d;
}

ostream & operator << (ostream & out, const Crayon & cr){
 out << "(" <<cr.longueur <<" "<< cr.diametre<<")";
 return out;
}