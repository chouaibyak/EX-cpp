#include "Trousse.h"
#include "iostream"
#include <ostream>
using namespace std;

Trousse::Trousse(){

}
void Trousse::ajoute(Fourniture *f){
    listeFourniture.push_back(f);
}
ostream& operator<<(ostream& os, const Trousse& t) {
    unsigned n = t.listeFourniture.size();
    os << "Trousse contient :" << endl;
    for (int i=0; i<n;i++) {
        t.listeFourniture[i]->afficher(os);
        os<<endl;
    }
    return os;
}

