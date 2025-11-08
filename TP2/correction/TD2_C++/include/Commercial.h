#ifndef COMMERCIAL_H
#define COMMERCIAL_H
#include<Employe.h>

class Commercial :public  Employe
{
    public:
        virtual ~Commercial();
        Commercial(string &,string &,unsigned int,string &,double);

    protected:
        double chiffre;

    private:
};

#endif // COMMERCIAL_H
