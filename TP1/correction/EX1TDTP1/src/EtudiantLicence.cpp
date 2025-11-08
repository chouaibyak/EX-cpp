#include "Etudiant.h"

#include "EtudiantLicence.h"

EtudiantLicence::EtudiantLicence()
{
    //ctor
}

EtudiantLicence::~EtudiantLicence()
{
    //dtor
}

EtudiantLicence::EtudiantLicence(string name, string prename, int nbNotes, float noteM):Etudiant(name,prename,nbNotes)
{

noteMemoire=noteM;

}

void EtudiantLicence::saisie()
{
    Etudiant::saisie();
    cout<<"entrer la note de PFE"<<endl;
    cin>>noteMemoire;
}
void EtudiantLicence::affichage()
{
    Etudiant::affichage();
    cout<<"vous avez obtenu dans le PFE la note :"<<noteMemoire<<endl;
}

float EtudiantLicence::moyenne()
{
    float A;
    A=Etudiant::moyenne();
    return (A+noteMemoire)/2;
}

int EtudiantLicence::admis()
{

    if(moyenne()>=10)
     return 1;
     else return 0;
}



int EtudiantLicence::memeMoyenne(EtudiantLicence& e)
{
    if(moyenne()==e.moyenne())
        return 1;
    else return 0;
}
