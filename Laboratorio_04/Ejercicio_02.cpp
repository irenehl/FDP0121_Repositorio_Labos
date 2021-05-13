/*
Solicite los coeficientes a, b, y c, de un polinomio de la forma ax2+bx+c, y calcule 
sus raíces por medio de la conocido ecuación cuadrática:

x = (-b +- sqrt(b^2 - 4ac))/2a

Para el discriminante D = b^2 - 4ac debe considerar:
Si D > 0, dos soluciones.
Si D = 0, una solución.
Si D < 0, no hay solución real.

PASOS A SEGUIR: 
1. Declarar a, b y c y solicitar dichos numeros
2. Calcular el discriminante
3. Evaluar en base a la respuesta del discriminante
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void) {
    int a = 0, b = 0, c = 0, discriminante = 0;
    float solucionA = 0, solucionB = 0;

    cout << "Coeficiente a: "; cin >> a;
    cout << "Coeficiente b: "; cin >> b;
    cout << "Coeficiente c: "; cin >> c;

    discriminante = (pow(b, 2) - (4 * a * c ));

    if (discriminante > 0) {
        solucionA = ((-b + sqrt(discriminante)) / (2 * a));
        solucionB = ((-b - sqrt(discriminante)) / (2 * a));

        cout << "Solucion A: " << fixed << setprecision(2) << solucionA << endl;
        cout << "Solucion B: " << fixed << setprecision(2) << solucionB << endl;
    }
    else if(discriminante == 0) {
        solucionA = ((-b  / (2 * a)));

        cout << "Solucion A: " << solucionA << fixed << setprecision(1) << endl;
    }
    else
        cout << "No tiene solucion real" << endl;

    return 0;
}