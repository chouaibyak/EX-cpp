#include "ChaineCara.h"
#include "ChaineDerivee.h"
#include <iostream>
using namespace std;

int main() {
    char texte[] = "salam";
    ChaineCara c1(texte);
    ChaineCara c2 = c1;

    // Test de l'opérateur ==
    if (c1 == c2)
        cout << "Les deux chaines sont identiques." << endl;
    else
        cout << "Les chaines sont differentes." << endl;

    // Test de l'opérateur +
    ChaineCara c3 = c1 + c2;  // concaténation
    cout << "Apres concatenation : ";
    c3.affiche();

    // Test de l'opérateur []
    cout << "Le 3e caractere de c1 est : " << c1[2] << endl;

    //=========================ChaineDerivee==========================
   cout << "=== Test 1 : Chaine numerique ===" << endl;
    char txt1[] = "256.75";
    ChaineDerivee chd(txt1);
    chd.affiche();  // doit afficher type = 1, val = 256.75
    return 0;
}
