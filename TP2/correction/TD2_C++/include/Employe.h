#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <string>
#include <iostream>

using namespace std;

class Employe
{
    public:
        Employe();
        Employe(const string&, const string&,int, const string&);
        virtual ~Employe();
        virtual string getInfo()const;
        virtual double salaire () const =0;

    protected:

    private:
        string nom;
        string prenom;
        unsigned int age;
        string date;
};

//la class commercial represente les vendeures et represantants
class Commercial :public  Employe
{
    public:
        Commercial(const string&, const string&, int,const string&,const double);

    protected:
        double chiffre;

    private:
};

class Vendeur :public Commercial{

    public:
        Vendeur(const string&, const string&,int,const string&,const double);
        virtual string getInfo()const; //si on va pas avoir une class qui herite de Vendeur ce n'est pas la painne de faire virtual
        virtual double salaire () const;


};

class Representant :public Commercial{

    public:
        Representant(const string&, const string&,int,const string&,const double);
        virtual string getInfo()const;
        virtual double salaire () const;


};

class Producteur :public Employe
{
    public:
        Producteur(const string&, const string&,int,const string&, unsigned);
        virtual string getInfo()const;
        virtual double salaire () const;

    protected:
         unsigned int nbre_unites;
    private:
};

class Manutentionnaire :public Employe
{
    public:
        Manutentionnaire(const string&, const string&,int,const string&, unsigned);
        virtual string getInfo()const;
        virtual double salaire () const;

    protected:
         unsigned int nbre_heures;
    private:
};

class Risque
{
    public:
        Risque();
        virtual ~Risque();
        Risque(double);

    protected:
        double prime;

    private:
};

class ProducteurARisque :public Producteur,public Risque
{
        ProducteurARisque(const string&, const string&,int,const string&, unsigned,const double);
        virtual string getInfo()const;
        virtual double salaire () const;

};

class ManutentionnaireARisque :public Manutentionnaire,public Risque
{
        ManutentionnaireARisque(const string&, const string&,int,const string&, unsigned,double);
        virtual string getInfo()const;
        virtual double salaire() const;

};

#endif // EMPLOYE_H
