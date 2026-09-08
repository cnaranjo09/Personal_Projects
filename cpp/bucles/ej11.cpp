/*Escriba un programa que realice la serie de fibonacci hasta 1 1 2 3 5 8 13 ...n*/

#include <iostream>

using namespace std;



int x;
int suma1 = 0;
int suma2 = 1;
int suma3 = 1;

int main () {

    cout << "Digite un numero: "; cin >> x;
    for (int i=1; x>= i ; i++) {

        //suma1 = (i-2) + (i-1);
        
        suma3 = suma1 + suma2;

        suma1 = suma2;
        suma2 = suma3;


    }
    cout << "fibonacci de N seria: " << suma1 << endl;
}