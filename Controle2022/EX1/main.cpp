#include "Ouvrage.h"
#include "Bibliotheque.h"
#include <string>
#include <iostream>
using namespace std;

int main(){
    Ouvrage* o1 = new Ouvrage(12,"boite a merveille", 2, 130.3);
    o1->affiche();
    cout << "prix totale: " <<o1->totalOuvrage()<<endl;

    Bibliotheque b;
    b.ajouter(o1);
    b.affiche();
    cout << b.recherche(12)<<endl;
    b.augmenterNBEXP(12, 2);
    cout << "apres augmentation :"<<endl;
    b.affiche();
}