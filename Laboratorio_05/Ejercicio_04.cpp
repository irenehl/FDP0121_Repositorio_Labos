/*
Realice un programa que contenga un menú para ordenar hamburguesas, el usuario 
podrá elegir el tipo de hamburguesa que desea, después de que elija el tipo que 
desea, podrá elegir la cantidad de hamburguesas que desea, guíese por la siguiente 
tabla:

1. Hamburguesa sencilla -- $2.99
2. Hamburguesa con queso -- $3.50
3. Hamburguesa doble -- $4.20
4. Hamburguesa con tocino -- $4.55

Al final del programa imprima el total a pagar

*/

#include <iostream>
using namespace std;

int main(void) {
    int opcion = 0, cantidadHamburguesas = 0;
    float total = 0, totalFinal = 0;

    while(opcion < 5) {
        cout << "\tMENU DE HAMBURGUESAS" << endl;
        cout << "1. Hamburguesa sencilla -- $2.99" << endl;
        cout << "2. Hamburguesa con queso -- $3.50" << endl;
        cout << "3. Hamburguesa doble -- $4.20" << endl;
        cout << "4. Hamburguesa con tocino -- $4.55" << endl;
        cout << "5. Salir" << endl; 
        cout << "Opcion: "; cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Cantidad que desea: "; cin >> cantidadHamburguesas;
                total = cantidadHamburguesas * 2.99;
                totalFinal += total;
                break;
            case 2:
                cout << "Cantidad que desea: "; cin >> cantidadHamburguesas;
                total = cantidadHamburguesas * 3.5;
                totalFinal += total;
                break;
            case 3:
                cout << "Cantidad que desea: "; cin >> cantidadHamburguesas;
                total = cantidadHamburguesas * 4.2;
                totalFinal += total;
                break;
            case 4:
                cout << "Cantidad que desea: "; cin >> cantidadHamburguesas;
                total = cantidadHamburguesas * 4.55;
                totalFinal += total;
                break;
            case 5:
                cout << "Saliendo" << endl;
                break;
            default:
                cout << "Lea bien meco" << endl;
        }
    }

    cout << "Total a pagar $" << totalFinal << endl;

    return 0;
}