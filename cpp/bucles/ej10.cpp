/*Programa que calcula 1-2+3-4+5-6...n*/

#include <iostream>

using namespace std;

int x;
int par; 
int impar;
int r;


int main () {

    cout << "Ingrese un valor: "; cin >> x;

    for(int i=1; x>=i; i++) {

        if (i%2 == 0 ) {

            r = r - i;

        } else {

            r = r+i;
        }
        
    }
    cout << "resultado: " << r << endl;
    
}