// Realice un programa que calcule el area de un triangulo, un cuadrado y un circulo
#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
    int opcion = 0;
    float base = 0, altura = 0, area = 0, radio = 0, lado = 0;

    // \t sirve para tabular
    cout << "\tCALCULO DE AREAS" << endl;
    cout << "1. Area triangulo" << endl;
    cout << "2. Area cuadrado" << endl;
    cout << "3. Area circulo" << endl;
    cout << "Su opcion: "; cin >> opcion;

    if (opcion == 1) {
        cout << "Area triangulo" << endl;
        cout << "Altura: "; cin >> altura;
        cout << "Base: "; cin >> base;

        area = ((base * altura) / 2);

        cout << "El area es: " << area; cout << endl;
    }
    else if (opcion == 2){
        cout << "Area cuadrado" << endl;
        cout << "Lado: "; cin >> lado;

        area = pow(lado, 2);
        // pow(base, exponente)
        // area = (lado * lado);

        cout << "Area: " << area;
    }
    else {
        cout << "Area circulo" << endl;
        cout << "Radio: "; cin >> radio;

        area = (3.1316 * pow(radio, 2));

        cout << "Area: " << area;
    }

    return 0;
}