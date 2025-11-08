#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <string>
using namespace std;

class Etudiant
{
private:
    static int cmptCne;
    int cne;
    string nom;
    string prenom;
    int nbrNotes;
    float *tabNotes;
public:
    // Constructeurs
    Etudiant();
    Etudiant(string n, string p, int nbN, float* notes); 

    // Destructeur
    ~Etudiant(); 

    // Constructeur par recopie
    Etudiant(const Etudiant &autre); // correction : passer par référence constante

    // Getters
    int getCne();
    string getNom();
    string getPrenom();
    int getNbrNotes();
    float* getTabNotes();
    float getNote(int index);

    // Setters
    void setNom(string n);
    void setPrenom(string p);
    void setNbrNotes(int nbN);
    void setTabNotes(int index, float valeur);

    // Méthodes
    void saisie();
    void affichage();
    float moyenne();
    int admis();
    int memeMoyenne(Etudiant e);
};

#endif