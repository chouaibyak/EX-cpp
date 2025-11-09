#include "RobotNG.h"
#include <iostream>
using namespace std;

RobotNG::RobotNG(const string& n, int x, int y, const string &d)
    :Robot(n, x, y, d ){}
void RobotNG::avance(int pas){
    if(direction == "Est"){
        x+=pas;
    }else if(direction == "Nord"){
        y+=pas;
    }
    else if(direction == "sud"){
        y-=pas;
    }
    else if(direction == "ouest"){
        x-=pas;
    }
}
void RobotNG::gauche(){
    if (direction == "Est") {
        direction = "Nord";
    } else if (direction == "Nord") {
        direction = "Ouest";
    } else if (direction == "Ouest") {
        direction = "sud";
    } else if (direction == "sud") {
        direction = "Est";
    }
}
void RobotNG::demiTour(){
    if(direction == "Nord"){
        direction = "sud";
    }else if(direction == "sud"){
        direction = "Nord";
    }else if(direction == "Est"){
        direction = "ouest";
    }else if(direction == "ouest"){
        direction = "Est";
    }
}

//======================Deuxieme methode====================

// void RobotNG::avance(int pas) {
//     for (int i = 0; i < pas; i++) {
//         avance();
//     }
// }

// void RobotNG::gauche() {
//     for (int i = 0; i < 3; i++) {
//         droite(); 
//     }
// }

// void RobotNG::demiTour() {
//     for (int i = 0; i < 2; i++) {
//         droite(); 
//     }
// }