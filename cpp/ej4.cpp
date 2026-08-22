#include <iostream>

using namespace std;





int main () {

    int x;
    int y;
    int r = 1;
    int pot;

    cout << "Escriba la base: "; cin >> x;
    cout << "Escriba el exponente: "; cin >> y;

    for (int i = 1; y >= i; i ++ ){

        if (y == 1){
            cout<< "El resultado es: " << x <<  endl;
        } else { 
            pot = x;
            r = r*pot;

            //cout<< "El resultado es: " << r <<  endl;
        }
    }

    cout<< "El resultado es: " << r <<  endl;

    return 0;
}