/*Escriba un programa que calcule le factorial de n*/
#include <iostream>

using namespace std;

int x;
int r=1;
int s;

int main () {

    cout << "Ingrese un valor: "; cin >> x;

    for (int i = 1; x >= i; i++) {

        r = r*i;
        s = s + r;
        

    }


    cout << "la suma de factoriales seria: " << s << endl;

    return 0;

}