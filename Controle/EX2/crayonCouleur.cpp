#include "crayonCouleur.h"

crayonCouleur::crayonCouleur(double l, double d, string c):Crayon(l, d){
    couleur = c;
}

crayonCouleur::~crayonCouleur(){}
crayonCouleur&  crayonCouleur::operator=(const crayonCouleur &crc){
    couleur = crc.couleur;
    return *this;
}
ostream & operator << (ostream & out, const crayonCouleur & crc){
    out << "("<<crc.longueur<< " "<< crc.diametre<< " "<< crc.couleur <<")";
    return out;
}
void crayonCouleur::setCouleur(string c){
    couleur = c;
}
string crayonCouleur::getCouleur(){
    return couleur;
}