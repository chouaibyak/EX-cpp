#ifndef ETUDIANTLICENCE_H
#define ETUDIANTLICENCE_H

#include <string>
using namespace std;
#include "Etudiant.h"

class EtudiantLicence : public Etudiant {
private:
    float noteMemoire;

public:
    // Constructeurs
    EtudiantLicence();
    EtudiantLicence(string n, string p, int nbN, float* notes, float noteMem);
    EtudiantLicence(const EtudiantLicence &autre);

    // Méthodes
    void saisie();
    void affichage();
    float moyenne();
    int admis();
    int memeMoyenne(EtudiantLicence e);
};
#endif
