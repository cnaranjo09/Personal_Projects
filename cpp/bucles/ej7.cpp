/*Escriba un programa que calcule le factorial de n*/
#include <iostream>

using namespace std;

int x;
int r=1;

int main () {

    cout << "Ingrese un valor: "; cin >> x;

    for (int i = 1; x >= i; i++) {

        r = r*i;

        

    }


    cout << "El factorial de: " << x << " Es : " << r << endl;

    return 0;

}