/*
Muestre la cantidad de bytes que reservan en memoria los tipos enteros (char, int,  long) y los tipos reales (float, double, long double). 
*/
#include <iostream>
using namespace std;

int main(void) {
    int num = 0;
    float num2 = 4.56;
    char a = 'x';
    long num3 = 3455567756;
    double num4 = 355.6;
    long double num5 = 3445.4545;

    cout << &num << endl;
    cout << &num2 << endl;

    cout << "Int: " << sizeof(num) << endl;
    cout << "Float: " << sizeof(num2) << endl;
    cout << "Char: " << sizeof(a) << endl;
    cout << "Long: " << sizeof(num3) << endl;
    cout << "Double: " << sizeof(num4) << endl;
    cout << "Long double: " << sizeof(num5) << endl;

    return 0;
}