#ifndef CRAYON_H
#define CRAYON_H
#include <iostream>
using namespace std;

class Crayon{
protected:
    double longueur;
    double diametre;
public:
    Crayon(double l = 10, double d = 2);
    Crayon(const Crayon &cr);
    virtual ~Crayon();
    void setLong(double l);
    void setDia(double d);

    Crayon& operator=(const Crayon &cr);
    friend ostream & operator << (ostream & out, const Crayon & cr);
};

#endif