#include "Robot.h"
#include <string>
#include <iostream>
using namespace std;

Robot::Robot(){
    nom = "Iconnue";
    x =0;
    y=0;
    direction = "Est";
}

Robot::Robot(const string& n, int x, int y, const string& d){
    nom = n;
    this->x = x;
    this->y = y;
    direction = d;
}
void Robot::avance(){
    if(direction == "Est"){
        x++;
    }else if(direction == "Ouest"){
        x--;
    }else if(direction == "Nord"){
        y++;
    }else if(direction == "Sud"){
        y--;
    }

}
void Robot::droite() {
    if (direction == "Nord") {
        direction = "Est";
    } else if (direction == "Est") {
        direction = "Sud";
    } else if (direction == "Sud") {
        direction = "Ouest";
    } else if (direction == "Ouest") {
        direction = "Nord";
    }
}

void Robot::afficher(){
    cout << "nom: "<<nom <<endl; 
    cout << "position("<<x <<", "<<y<<")"<<endl; 
    cout << "direction: "<<direction <<endl; 
}