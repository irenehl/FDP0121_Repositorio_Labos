// Dados tres números enteros indique si el tercero es igual a la suma del primero y el segundo.

#include <iostream>
using namespace std;

int main(void) {
    int num = 0, num2 = 0, num3 = 0, suma = 0;

    cout << "Num 1: "; cin >> num;
    cout << "Num 2: "; cin >> num2;
    cout << "Num 3: "; cin >> num3;

    suma = num + num2;

    if(num3 == suma) 
        cout << "Son iguales" << endl;
    else 
        cout << "No son iguales" << endl;

    return 0;
}