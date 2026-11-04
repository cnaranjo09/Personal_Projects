/*Realice un programa que solicite al usuario que piense en un numero entero entero entre el 1 y el 100. El programa debe generar 
un numero aleatorio en ese mismo rango de 0 a 100, e indicarle al usurario si el numero que digito es menor o mayor que el numero aleatorio,
asi hasta que lo adivine, y por ultimo mostrarle el numero de intentos que le llevo.  */

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int x;
int aleatorio; 
int contador; 

int main () {

    cout << "Ingrese un valor entre 1 - 100: "; cin >> x;

    if(1 <= x && x <= 100 ) {
        cout << "numero correcto"<< endl;

    } else {
        cout << "Este numero esta fuera de rango" << endl; 
    }



}