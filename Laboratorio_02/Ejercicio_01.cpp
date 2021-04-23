#include <iostream>
using namespace std;

int main(void) {
    int num1 = 0, num2 = 0, suma = 0;
    float numFloat1 = 0, numFloat2 = 0, restaFloat = 0;

    cout << "Suma de numeros enteros" << endl;
    cout << "Primer numero: "; cin >> num1;
    cout << "Segundo numero: "; cin >> num2;

    suma = num1 + num2;

    cout << "La suma es: " << suma;

    cout << endl << endl;

    cout << "Resta de numeros flotantes (decimales)" << endl;
    cout << "Primer numero: "; cin >> numFloat1;
    cout << "Segundo numero: "; cin >> numFloat2;

    restaFloat = numFloat1 - numFloat2;

    cout << "La resta es: " << restaFloat;

    return 0;
}

/*
// Tipos de variables

// Int -> entero 
int sumaTotal = 2;

// tipo nombre valor

// float -> decimal
float totalDecimal = 1.2;

// string -> cadena, palabra
string nombre = "Daniela";
string apellido = "Huezo";
string nombreCompleto = "Daniela Irene Huezo Lopez";

// char -> caracter
char vocal = 'a';


FUNCIONES

tipo nombre parametros
void concatenarNombre (string nombre, string apellido) {

}

*/