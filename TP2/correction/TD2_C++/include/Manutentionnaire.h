#ifndef MANUTENTIONNAIRE_H
#define MANUTENTIONNAIRE_H
#include "Employe.h"

using namespace std;

class Manutentionnaire :public Employe
{
    public:
        Manutentionnaire();
        virtual ~Manutentionnaire();
        Manutentionnaire(string &,string &,unsigned int,string &,double,unsigned int)
        double salaire()const;
        string getInfo()const;

    protected:
        unsigned int heures;
    private:
};

#endif // MANUTENTIONNAIRE_H
