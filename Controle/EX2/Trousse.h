#ifndef TROUSSE_H
#define TROUSSE_H
#include <ostream>
#include "Fourniture.h"
#include "Crayon.h"
#include "crayonCouleur.h"
#include <vector>
using namespace std;

class Trousse : public Fourniture {
private:
    vector<Fourniture *>listeFourniture;
public:
    Trousse();
    void ajoute(Fourniture *f);
    friend ostream& operator<<(ostream& os, const Trousse& t);
};
#endif