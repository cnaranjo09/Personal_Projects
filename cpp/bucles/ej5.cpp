/*Programa que revisa cuales numeros son pares o impares*/

#include <iostream>

using namespace std;


int valor; 

int main () {


    cout << "Ingrese un Numero: ", cin >> valor; 

    if (valor%2 ==0 ){

        cout << valor << " Es un numero par"<< endl;

    } else {
        cout << valor << " Es un numero impar" << endl;
    }



}