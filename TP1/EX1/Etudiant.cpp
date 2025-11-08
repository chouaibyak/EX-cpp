#include "Etudiant.h"
#include<iostream>
using namespace std;

int Etudiant::cmptCne = 0;

//constracteur d'initialisation
Etudiant::Etudiant(){
    cne = ++cmptCne;
    nom = "Inconnu";
    nbrNotes = 0;
    tabNotes = nullptr; //pas encore memoire alloue
}

//constracteur
Etudiant::Etudiant( string n, string p, int nbN, float* notes){
    cne = ++cmptCne;
    nom = n;
    prenom = p;
    nbrNotes = nbN;
    tabNotes = new float[nbrNotes];
    for(int i =0; i<nbrNotes; i++){
        tabNotes[i] = notes[i];
    }
}

// Constructeur de recopie
Etudiant::Etudiant(const Etudiant &autre) {
    cne = autre.cne;
    nom = autre.nom;
    prenom = autre.prenom;
    nbrNotes = autre.nbrNotes;
    tabNotes = new float[nbrNotes]; // nouvelle mémoire
    for (int i = 0; i < nbrNotes; i++)
        tabNotes[i] = autre.tabNotes[i];
}

//Destructeur
Etudiant::~Etudiant() {
    delete[] tabNotes; // libère la mémoire dynamique
}

//getters
int Etudiant::getCne(){
    return cne;
}
string Etudiant::getNom(){
    return nom;
};
string Etudiant::getPrenom(){
    return prenom;
};
int Etudiant::getNbrNotes(){
    return nbrNotes;
};
float* Etudiant::getTabNotes(){
    return tabNotes;
};

float Etudiant::getNote(int index){
    return tabNotes[index];
}

//setters
void Etudiant::setNom(string n){
    nom = n;
};
void Etudiant::setPrenom(string p){
    prenom = p;
};
void Etudiant::setNbrNotes(int nbN){
    nbrNotes = nbN;
    tabNotes = new float[nbrNotes];
};
void Etudiant::setTabNotes(int index, float valeur){
    tabNotes[index] == valeur;
};

//methode
void Etudiant::saisie(){
    cout << "nom :" << endl; cin>>nom;
    cout << "prenom :" <<endl; cin>>prenom;
    cout << "nombre des note :" << endl; cin>>nbrNotes;
    delete[] tabNotes;
    tabNotes = new float[nbrNotes];
    for(int i =0;i<nbrNotes; i++){
        cout<< "entrer notes" << i << ":" << endl;
        cin >>tabNotes[i];
    } 
}

void Etudiant::affichage(){
    cout << "Etudiant [cne : "<<cne << " nom: "<<nom << " prenom: " << prenom <<
    " nombre des notes : " << nbrNotes << "]" <<endl;
    for(int i=0;i<nbrNotes;i++){
        cout<<"note n"<<i<<" : "<< tabNotes[i]<<endl;
    }
    cout << "************************************" << endl;
}

float Etudiant::moyenne(){
    float s =0;
    for(int i=0; i<nbrNotes; i++){
        s += tabNotes[i];
    }
    return s /nbrNotes;
}

int Etudiant::admis(){
    if(Etudiant::moyenne()<10){
        return 0;
    }
    else{
        return 1;
    }
}

int Etudiant::memeMoyenne(Etudiant e) {
    if (e.moyenne() == moyenne()) {
        return 1;
    } else {
        return 0;
    }
}
