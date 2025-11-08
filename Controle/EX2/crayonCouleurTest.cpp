#include "crayonCouleur.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    crayonCouleur cr1(12, 3, "bleu");
    cout<<cr1 << endl;
    cr1.setCouleur("rouge");
    cout << "apres modification couleur :"<<endl;
    cout << cr1 << endl;
}