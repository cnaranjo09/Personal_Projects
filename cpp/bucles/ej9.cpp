/*Prograna que calcula el valor de 2^1 + 2^2 + 2^3 ... 2^n*/

# include <iostream>
#include<math.h>

using namespace std;

int cuadrado;
int b = 2;
int r = 0;

int main () {

    cout << "Escriba un valor: "; cin >> cuadrado; 

    for(int i = 1; cuadrado >= i; i++) {
         
        r = b*i + r;

    }

    cout << "El resultado es: " << r << endl;



}