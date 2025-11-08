#include <iostream>
#include <fstream>
#include "Ex1.h"

using namespace std;

int main()
{
    Personne p;

    // chemin correct vers le fichier
    string const fichier("C:/Users/yakin/Documents/RSI/M1/POO C++/TP2/EX1/fn.txt");

    if(not p.charger(fichier)){
        cerr << "Chargement fichier erreur : " << fichier << endl;
    }
    else{
        cout << "Fichier charge correctement !" << endl;
        p.calculer();
    }

    p.vider();

    return 0;
}
