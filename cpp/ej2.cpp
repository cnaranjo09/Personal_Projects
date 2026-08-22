/*Programa que calcule y muestre en la salida estandar la suma de los cuadrados*/

#include <iostream>

using namespace std;


int main() {

    int suma = 0, cuadrado;

    for (int i = 0; i <= 10; i ++) {

        cuadrado = i*i;
        suma = suma + cuadrado; // suma += cuadrado;
        cout << "Resultado:" << suma << endl;
    }





    return 0;
}

