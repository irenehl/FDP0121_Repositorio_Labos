/*
Lea tres números enteros desde teclado y, basándose en comparaciones, 
despliegue el mayor. Utilice if anidados
*/

#include <iostream>
using namespace std;

int main(void) {
    int num1 = 0, num2 = 0, num3 = 0;

    cout << "Num1: "; cin >> num1;
    cout << "Num2: "; cin >> num2;
    cout << "Num3: "; cin >> num3;

    if(num1 >= num2) { 
        if(num1 >= num3)
            cout << "Mayor: " << num1;
    }
    else {
        if (num2 > num3)
            cout << "Mayor: " << num2;
        else
            cout << "Mayor: " << num3;
    }

    return 0;
}