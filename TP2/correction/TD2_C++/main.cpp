#include <iostream>
#include <fstream>
#include "Employe.h"
#include "Personnel.h"

using namespace std;

int main()
{
    Personnel p;
    string const fichier("C:\dtpersonnel.txt");

    if(not p.charger(fichier)){
        cerr <<"Chargement fichier erreur"<<endl;
    }
    else{
        p.calculer();
    }

    p.vider();

    return 0;
}
