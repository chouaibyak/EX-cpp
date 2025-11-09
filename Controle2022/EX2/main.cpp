#include "RobotNG.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    Robot r1("R2D2");
    RobotNG r2("Wall-E", 2, 3, "Nord");

    vector<Robot*> liste;
    liste.push_back(&r1);
    liste.push_back(&r2);

    cout << "=== etat des robots ===" << endl;
    for (Robot* r : liste) {
        r->afficher();
    }

    return 0;
}
