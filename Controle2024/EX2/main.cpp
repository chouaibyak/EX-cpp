#include <string>
#include <iostream>
#include "Vol.h"
#include "Passager.h"
#include "Reservation.h"
using namespace std;

int main(){

    PassagerEconomique p1("Ali", "P123");
    PassagerBusiness p2("Sara", "P456");

    Reservation r;
    r.calculerPrix(p1);
    r.afficherReservation(p1);
}