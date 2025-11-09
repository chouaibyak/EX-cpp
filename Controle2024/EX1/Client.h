#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Client{
private:
    int codeCleint;
public:
    Client(int);
    void setCode(int);
    int getCode();
};

//===============Siege====================

class Siege {
private:
    int numSiege;
    Client *c = nullptr;
    bool occupe = false;
public: 
    Siege(int);
    bool libre();
    bool reserver(Client *c);
};

//===============Wagon====================

class Wagon(){
private:
    vector<Siege *> listeSiege;  
    int numWagon;
public:
    Wagon(int, int);
    Wagon(int);
    bool complet();
    bool reserverPlace(Client* c);
    int getNumWagon();
};

//=================Train=====================
class Train{
private:
    vector<Wagon *> listeWagon;
public:
    Train(vector<Wagon *>  ls);
    Wagon* chercherWagon(int numeroWagon);
    bool reserver(Client *c, int numeroWagon);
    bool reserver(Client *c);
    Train joindre(const Train& autreTrain);
};
#endif