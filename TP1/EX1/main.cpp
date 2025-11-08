#include "Etudiant.h"
#include "EtudiantLicence.h"
#include<iostream>
using namespace std;

int main(){
    Etudiant e;
    e.saisie();
    e.affichage();
    cout<< " moyenne = "<<e.moyenne() <<endl;
    cout<<"edmis " << e.admis()<< endl;
    //Etudiant 2
    float notes[] = {10,10,10};
    Etudiant e2("basma", "el kasimi", 3,notes);
    e2.affichage();
    cout << "meme moyenne : " << e.memeMoyenne(e2) << endl;
    //EtudiantLicence
    EtudiantLicence e3;
    EtudiantLicence e4("salah", "yakine", 3, notes, 10);
    e3.saisie();
    e3.affichage();
    cout<< "moyenne Licence : " << e3.moyenne()<<endl;
    cout << "Licence admis ? " << e3.admis() << endl;
    cout << "Licence meme moyenne ? "<< e3.memeMoyenne(e4) << endl;

}