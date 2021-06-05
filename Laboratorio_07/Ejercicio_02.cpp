/*
Escriba una función que indique si un valor, x, está contenido en el intervalo cerrado [a, b]. 
Su función debe recibir los tres enteros, a, b, y x. Deberá retornar un valor 
booleano.
*/

#include <iostream>
using namespace std;

bool intervalo(int a, int b, int x);

int main(void) {
    int a = 0, b = 0, x = 0;

    cin >> a >> b >> x;

    /*
    if(intervalo(a, b, x))
        cout << "Esta en el invertarlo" << endl;
    else 
        cout << "efe";
    */

   // Ternario

    intervalo(a, b, x) ? cout << "Esta en el intervalo" << endl : cout << "Efe" << endl;

    return 0;
}

bool intervalo(int a, int b, int x) {
    if (a <= x && x <= b)
        return true;
    else    
        return false;
} 