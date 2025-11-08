#include <iostream>
#include "Etudiant.h"
using namespace std;

int main()
{

    Etudiant *etud1 = new Etudiant("etud1", "etud1", 3);
    Etudiant etud2;
    Etudiant etud3;

    etud1->saisie();
    etud1->moyenne();
    etud1->affichage();

    cout << endl << "***********" << endl;

    etud2.setNbrNotes(3);
    etud2.setNom("etud2");
    etud2.setPrenom("etud2");
    etud2.saisie();
    etud2.moyenne();
    etud2.affichage();

    cout << "***********" << endl;

    cout << "Etudiant: " << etud1->getNom() << " est " << (etud1->admis() ? "admis" : "n'est pas admis") << endl;
    cout << "Etudiant: " << etud2.getNom() << " est " << (etud2.admis() ? "admis" : "n'est pas admis") << endl;

    cout << endl << "***********" << endl;

    cout << "Etudiant: " << etud1->getNom() << " et Etudiant: "
    << etud2.getNom() << (etud1->memeMoyenne(etud2) ? " ont la meme moyenne" : " ont pas la meme moyenne") << endl;

    cout << endl << "***********" << endl;

    etud3 = etud2;
    etud3.affichage();
}
