#ifndef OUVRAGE_H
#define OUVRAGE_H
#include <string>
#include <iostream>
using namespace std;

class Ouvrage {
private:
    int code;
    string titre;
    int nbrExemplaire;
    double prixUnitaire;
public:
    Ouvrage();
    Ouvrage(int, const string&, int, double);
    //getters
    int getCode();
    string getTitre();
    int getNbrExemplaire();
    double getPrixUnitaire();
    //setters
    void setCode(int c);
    void setTitre(string t);
    void setNbrExemplaire(int nbrEx);
    void setPrixUnitaire(double prix);
    //methodes
    void affiche();
    double totalOuvrage();
};

#endif