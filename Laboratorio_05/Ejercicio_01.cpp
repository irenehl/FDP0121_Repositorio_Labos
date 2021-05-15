//  Solicite al usuario una letra y detecte si es o no una vocal.

#include <iostream>
#include <cctype>
using namespace std;

int main(void) {
    char letra;

    cout << "Digite una letra: "; cin >> letra;
    (char) tolower(letra);

    switch(letra) {
        case 'a':
        case 'A':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Es vocal" << endl;
            break;
        default:
            cout << "Es consonante" << endl;
    }

    return 0;
} 