#include "Vehicule.h"
#include "Camion.h"
#include "iostream"
#include "Voiture.h"
using namespace std;

int main(){
    Vehicule v(2001, 150);
    v.calculerPrix();
    v.afficher();
    Camion c = Camion(2005,12, 14);
    c.calculePrix();
    c.afficher();
  
}