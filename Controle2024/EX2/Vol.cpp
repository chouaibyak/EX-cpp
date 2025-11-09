#include <string>
#include <iostream>
#include "Vol.h"
using namespace std;

Vol::Vol(string n, string d, string date, int ns, int nt){
    numero = n;
    destination = d;
    dateDepart = date;
    nmbrSieges = ns;
    nmbrTotalSieges = nt;
}
bool Vol::estDisponible() const{
    if(nmbrTotalSieges>nmbrSieges){
        return true;
    }
    return false;
}
void Vol::afficher() const{
    cout << "============Vol============"<<endl;
    cout << "numero: " <<numero<<endl;
    cout<<"destination: " <<destination<<endl;
    cout<<"dateDepart: "<< dateDepart<<endl;
    cout<<"nmbrSieges: "<<nmbrSieges<<endl;
    cout<<"nbrTotaleSieges: "<<nmbrTotalSieges<<endl;
    cout<<"estDispo?? "<<estDisponible()<<endl;
}