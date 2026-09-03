/*Cree un programa que calcule el valor de 1+2+3+..+2n-1*/

#include <iostream>

using namespace std;

int valor;
int r = 0;

int main () {

    cout << "Ingrese un valor impar: "; cin >> valor;


    if (valor%2 == 0){
        
        cout << "El numero es incorrecto"; cin >> valor;
        

    } else {
        
        for (int i=1; valor >= i; i=i+2){

            
            r = i + r;

            cout << "El resultado es: " << r << endl;

        }
            
    } 

    return 0;


}