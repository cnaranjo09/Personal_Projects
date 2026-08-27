/*Programa para identificar si un numero es primo o no*/

#include <iostream>

using namespace std;


int numero;

int main () {

    cout <<"Ingrese un Numero: ";  cin >> numero;

    if (numero == 2 ) {
        cout << "Este numero SI es primo" << endl;
    }else {
        if (numero%2 == 0  ){

            cout << "Este numero No es primo" << endl;

        }
        else {

            bool b = true;
            for (int i = 3; i < numero; i++) {
                
                int a = numero%i;

                if(a == 0) {
                    cout << "Este numero NO es primo" << endl;
                    i = numero;
                    b = false;

                } else {

                }

            }
            
            if (b ==true){
                cout << "Este numero SI es primo" << endl;
            }
            
        }
    }
    return 0;

}

