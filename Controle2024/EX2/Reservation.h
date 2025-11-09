#ifndef RESERVATION_H
#define RESERVATION_H
#include "Passager.h"
#include <iostream>
#include <string>
using namespace std;

class Reservation{
public:

template<typename T>
float calculerPrix(const T& passager){
   return passager.calculerPrix();
}

template <typename T>
void afficherReservation(const T& passager) {
    cout << "Prix : " << calculerPrix(passager) << endl;
}

};

#endif

