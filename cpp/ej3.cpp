/*programa que recolecte temparaturas cada 4 horas, durante 24 horas, y al final imprima el promedio de temperaturas y la temp mas baja y mas alta*/

#include <iostream>
#include <unistd.h>
#include <climits>

using namespace std; 

int main () {

    int horas;
    int temp; 
    int tempmax = INT_MIN; // el entero más bajo posible
    int tempmin = INT_MAX; // el entero más alto posible
    int prom;
    
    for (int i = 0; i<= 24; i++) {

        cout << "Hora: " << i << endl;
        sleep(1);
        
        if (i%6 == 0 && i != 0){
            cout<< "Ingrese el valor de la temperatura: " << endl;
            cin >> temp;
            

            prom = prom + temp;
            if (tempmax <= temp) {
                tempmax = temp;
            }
            if (tempmin >= temp) {
                tempmin = temp;
            }
            

            cout << "Temp max: " << tempmax << endl;
            cout << "Temp min: " << tempmin << endl;
            cout << "Promedio: " << prom/4 << endl;

        } 

    
    }
    

    
    return 0;

}
