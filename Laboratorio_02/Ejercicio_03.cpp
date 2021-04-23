// Realice un programa que indique si un numero es par o impar
#include <iostream>
using namespace std;

int main(void) {
    int num = 0;

    cout << "Digite numero: "; cin >> num;

    if (num % 2 == 0) 
        cout << "El numero es par";
    else 
        cout << "El numero es impar";

    return 0;
}