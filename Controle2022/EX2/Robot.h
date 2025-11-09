#ifndef ROBOT_h
#define ROBOT_H
#include <string>
#include <iostream>
using namespace std;

class Robot{
protected:
    string nom;
    int x, y;
    string direction;
public:
    Robot();
    Robot(const string&, int x=0, int y=0, const string& d= "Est");
    void avance();
    void droite();
    void afficher();
};

#endif