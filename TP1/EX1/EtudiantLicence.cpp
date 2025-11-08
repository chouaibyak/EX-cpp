#include <iostream>
#include "EtudiantLicence.h"

//constracteur
EtudiantLicence::EtudiantLicence():Etudiant(){
    noteMemoire = 0;
}

EtudiantLicence::EtudiantLicence(string n, string p, int nbN, float* notes, float noteMem)
    :Etudiant(n,p,nbN,notes){
            noteMemoire = noteMem;
}

EtudiantLicence::EtudiantLicence(const EtudiantLicence &autre):Etudiant(autre){
    noteMemoire = autre.noteMemoire;
}

//methode
void EtudiantLicence::saisie(){
    Etudiant::saisie();
    cout<< "ajouter note memoire : " << endl;
    cin >> noteMemoire;
}

void EtudiantLicence::affichage(){
    Etudiant::affichage();
    cout << "note memoire est : " << noteMemoire << endl;
}

float EtudiantLicence::moyenne(){
    float s = 0;
    s = Etudiant::moyenne() + noteMemoire;
    return s/2;
}

int EtudiantLicence::admis(){
    if(EtudiantLicence::moyenne()>10){
        return 1;
    }
    else{
        return 0;
    }
}

int EtudiantLicence::memeMoyenne(EtudiantLicence e){
    if(moyenne() == e.moyenne()){
        return 1;
    }
    else{
        return 0;
    }
}