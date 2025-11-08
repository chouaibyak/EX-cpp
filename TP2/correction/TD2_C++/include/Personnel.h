#ifndef PERSONNEL_H
#define PERSONNEL_H
#include "Employe.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Personnel
{
    public:
        Personnel();
        virtual ~Personnel();
        unsigned size() const;
        bool charger(const string& fichier);
        void ajouter(Employe *e);
        void calculer() const;
        void vider();

        //conteneurs pour les classes meres
        template<typename T>
        bool ajouterEmploye(istream& flux);//istream :read and interepret input from sequence of charactere

        template<typename T>
        bool ajouterCommercial(istream& flux);

        template<typename T>
        bool ajouterEmployeArisque(istream& flux);

    protected:

    private:
        vector<Employe*> listeEmployes;
};

#endif // PERSONNEL_H
