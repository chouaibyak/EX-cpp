#ifndef ETUDIANT_H
#define ETUDIANT_H
#include<iostream>
using namespace std;

class Etudiant
{
    public:
        Etudiant();
        Etudiant(string, string, int);
        Etudiant(const Etudiant &);
        ~Etudiant();

        int getCNE();
        string getNom();
        string getPrenom();
        void setNom(const string &);
        void setPrenom(const string &);
        void setNbrNotes(int);
        int getNbrNotes();

        void saisie();
        void affichage();
        float moyenne();
        int admis();
        int memeMoyenne(Etudiant &);

    protected:

    private:
        int CNE;
        string nom, prenom; // char nom[20], prenom[20];
        int nbrNotes;
        float* TabNotes;
        static int nbCNE;
};

#endif // ETUDIANT_H
