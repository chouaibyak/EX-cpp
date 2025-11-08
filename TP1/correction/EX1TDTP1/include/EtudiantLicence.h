#ifndef ETUDIANTLICENCE_H
#define ETUDIANTLICENCE_H

#include <Etudiant.h>


class EtudiantLicence : public Etudiant
{
    public:
        EtudiantLicence();
        EtudiantLicence(string name, string prename, int nbNotes, float noteM);
        virtual ~EtudiantLicence();
        float noteMemoire;
        void saisie();
        void affichage();
        float moyenne();
        int admis();
        int memeMoyenne(EtudiantLicence &);

    protected:

    private:
};

#endif // ETUDIANTLICENCE_H
