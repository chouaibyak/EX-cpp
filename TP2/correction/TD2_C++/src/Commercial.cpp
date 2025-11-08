#include "Commercial.h"
#include "Employe.h"
#include<string>
#include<iostream>

using namespace std;

Commercial::Commercial(string &n,string &p,unsigned int a,string &d,double c) :Employe(n,p,a,d),chiffre(c)
{}

Commercial::~Commercial()
{

}

