#ifndef ROBOTNG_H
#define ROBOTNG_H
#include "Robot.h"
#include <iostream>
using namespace std;

class RobotNG : public Robot {  
public:
    RobotNG(const string&, int, int, const string&);
    void avance(int pas);
    void gauche();
    void demiTour();
};

#endif