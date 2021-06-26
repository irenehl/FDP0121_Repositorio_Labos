/*
Dado una cadena de caracteres, que deben ser introducidos desde teclado, codifique su
contenido utilizando la clave del murciélago. Recuerde que las letras de esta clave tienen
la siguiente equivalencia: m = 0, u = 1, r = 2, c = 3, i = 4, e = 5, l = 6 a = 7, g = 8, o = 9
*/

#include <iostream>
#include <string>
using namespace std;

string encriptado(string frase);

int main(void) {
    string fraseConvertir = "";

    cout << "Digite frase: "; getline(cin, fraseConvertir);

    cout << encriptado(fraseConvertir) << endl;

    return 0;
}

string encriptado(string frase) {
    for(int i = 0; i < frase.length(); i++) {
        switch(frase[i]) {
            case 'm':
                frase[i] = '0';
            break;
            case 'u':
                frase[i] = '1';
            break;
            case 'r':
                frase[i] = '2';
            break;
            case 'c':
                frase[i] = '3';
            break;
            case 'i':
                frase[i] = '4';
            break;
            case 'e':
                frase[i] = '5';
            break;
            case 'l':
                frase[i] = '6';
            break;
            case 'a':
                frase[i] = '7';
            break;
            case 'g':
                frase[i] = '8';
            break;
            case 'o':
                frase[i] = '9';
            break;
        }
    }

    return frase;
}