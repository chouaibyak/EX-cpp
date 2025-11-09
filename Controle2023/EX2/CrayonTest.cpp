#include "Crayon.h"
#include <iostream>


int main(){
    Crayon c1(8, 4);
    Crayon c2(12, 3);
    cout << c1 << endl;
    cout << c2 << endl;
    c2.setLong(9);
    cout << "nouveau valeur c2: " << c2 <<endl; 
}
