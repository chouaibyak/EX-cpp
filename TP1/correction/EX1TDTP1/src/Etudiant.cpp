#include "Etudiant.h"

int Etudiant::nbCNE=0;

Etudiant::Etudiant()
{
    nbCNE++;
    CNE=nbCNE;
    nom="";
    prenom="";
    nbrNotes=0;

}

Etudiant::~Etudiant()
{
    delete [] TabNotes;
}

Etudiant::Etudiant(string name, string prename, int nbNotes)
{
    nbCNE++;
    CNE=nbCNE;
    nom=name;
    prenom=prename;
    nbrNotes=nbNotes;
    TabNotes=new float [nbrNotes];
}

Etudiant::Etudiant(const Etudiant & e)
{
    CNE=e.CNE;
    nom=e.nom;
    prenom=e.prenom;
    nbrNotes=e.nbrNotes;
    for(int i=0; i<nbrNotes; i++){
     TabNotes[i]=e.TabNotes[i];
    }
}

int Etudiant::getCNE(){
   return CNE;
}

string Etudiant::getNom(){
return nom;
}
string Etudiant::getPrenom(){
 return prenom;
}
void Etudiant::setNom(const string & name){
nom=name;
}
void Etudiant::setPrenom(const string & prename){
prenom=prename;
}
void Etudiant::setNbrNotes(int n){
nbrNotes=n;
TabNotes=new float [nbrNotes];
}

int Etudiant::getNbrNotes(){
    return nbrNotes;
}

void Etudiant::saisie(){
    cout <<"Saisie des notes:"<<endl;
    for(int i=0;i<nbrNotes;i++){
        cout<<" Entrer le note "<<i+1<<":";
        cin >>TabNotes[i];
    }
}

void Etudiant::affichage(){
    cout<<"Informations etudiant sont:"<<endl;
    cout<<"CNE:"<<CNE<<endl;
    cout<<"Nom:"<<nom<<endl;
    cout<<"Prenom:"<<prenom<<endl;
    cout<<"Nombre de notes:"<<nbrNotes<<endl;
    cout<<"Notes:"<<endl;
    for(int i=0; i<nbrNotes; i++){
        cout<<TabNotes[i]<< "\t";
    }
    cout<< endl <<"Moyenne:"<< moyenne() << endl;
}

float Etudiant::moyenne(){
    float s=0;
    for(int i=0;i<nbrNotes;i++)
        s=s+TabNotes[i];
    return s/nbrNotes;
}

int Etudiant::admis(){
    return (moyenne()>=10);
}

int Etudiant::memeMoyenne(Etudiant & e){
    if(moyenne()==e.moyenne())
        return 1;
    else
        return 0;
}




