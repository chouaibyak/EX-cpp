#include <iostream>
#include "Client.h"
using namespace std;

int main() {
    Client* c1 = new Client(1);
    Client* c2 = new Client(2);
    Client* c3 = new Client(3);

    Wagon* w1 = new Wagon(1, 5);
    Wagon* w2 = new Wagon(2, 5);

    vector<Wagon*> lw = {w1, w2};
    Train t1(lw);

    cout << (t1.reserver(c1, 1) ? "Réservation 1 réussie\n" : "Réservation 1 échouée\n");
    cout << (t1.reserver(c2, 1) ? "Réservation 2 réussie\n" : "Réservation 2 échouée\n");
    cout << (t1.reserver(c3, 2) ? "Réservation 3 réussie\n" : "Réservation 3 échouée\n");

    Wagon* w3 = new Wagon(3, 3);
    Wagon* w4 = new Wagon(4, 3);
    vector<Wagon*> lw2 = {w3, w4};
    Train t2(lw2);

    Train t3 = t1.joindre(t2);
    cout << "Trains joints avec succès\n";

    return 0;
}
