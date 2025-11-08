#include "ChaineDerivee.h"
#include <iostream>
using namespace std;

ChaineDerivee::ChaineDerivee():ChaineCara(){
    type =0;
    val =0;
}

ChaineDerivee::ChaineDerivee(char * texte):ChaineCara(texte){
    type =0;
    val =0;
    calcule();
}

ChaineDerivee::ChaineDerivee(const ChaineDerivee& ch) : ChaineCara(ch) {
    type = ch.type;
    val = ch.val;
}

void ChaineDerivee::affiche(){
    ChaineCara::affiche();
    cout << "Type : " << type << endl;
    cout << "Valeur : " << val << endl;
}

void ChaineDerivee::calcule(){
    val = atof(adr);
if(val != 0 || adr[0] == '0'){
    type = 1;
}
else 
    type =0;
}

