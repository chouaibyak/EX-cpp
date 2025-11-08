#ifndef FOURNITURE_H
#define FOURNITURE_H
#include <ostream>
using namespace std;

class Fourniture {
public:
    virtual void afficher(ostream & os) const =0;
};

class Gomme : public Fourniture{
    void afficher(ostream & os) const;
};

#endif