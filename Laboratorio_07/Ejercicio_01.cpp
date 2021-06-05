/* 
Traducir alguna frase al idioma p

Ejemplo:E s o   ya lo sabia
        _ _ _ _ _ 
Resultado:  Epesopo yapa lopo sapabipiapa
*/

#include <iostream>
#include <string>
using namespace std;

string traduccionP(string oracion);

int main(void) {
    string frase = "";

    cout << "Digite frase: "; getline(cin, frase);

    cout << traduccionP(frase) << endl;

    return 0;
}

string traduccionP(string oracion) {
    string fraseConvertida = "";

    for(int i = 0; i < oracion.length(); i++) {
        switch (oracion[i]) {
            case 'a':
                fraseConvertida += "apa";
                break;
            case 'e':
                fraseConvertida += "epe";
                break;
            case 'i':
                fraseConvertida += "ipi";
                break;
            case 'o':
                fraseConvertida += "opo";
                break;
            case 'u':
                fraseConvertida += "upu";
                break;
            default:
                fraseConvertida += oracion[i];
                break;
        }
    }
    return fraseConvertida;
}

/* 
Correr a mano switch

Primera vez que corre
FRASE: e so ya lo sabia
    switch (e) {
        case 'a':
            fraseConvertida += "apa";
            break;
        case 'e':
            fraseConvertida += "epe";
            fraseConvertida = epe
            break;
        case 'i':
            fraseConvertida += "ipi";
            break;
        case 'o':
            fraseConvertida += "opo";
            break;
        case 'u':
            fraseConvertida += "upu";
            break;
        default: 
            fraseConvertida += oracion[i];
            break;
    }

Segunda vez que corre
FRASE: e so ya lo sabia
    switch (s) {
        case 'a':
            fraseConvertida += "apa";
            break;
        case 'e':
            fraseConvertida += "epe";
            fraseConvertida = epe
            break;
        case 'i':
            fraseConvertida += "ipi";
            break;
        case 'o':
            fraseConvertida += "opo";
            break;
        case 'u':
            fraseConvertida += "upu";
            break;
        default: 
            fraseConvertida += s;
            fraseConvertida == epes

            break;
    }

Tercera vez que corre
FRASE: eso ya lo sabia
    switch (o) {
        case 'a':
            fraseConvertida += "apa";
            break;
        case 'e':
            fraseConvertida += "epe";
            fraseConvertida = epe
            break;
        case 'i':
            fraseConvertida += "ipi";
            break;
        case 'o':
            fraseConvertida += "opo";
            fraseConvertia = epesopo
            break;
        case 'u':
            fraseConvertida += "upu";
            break;
        default: 
            fraseConvertida += s;
            fraseConvertida == epes

            break;
    }

Cuarta vez que corre
FRASE: eso ya lo sabia
    switch (*aqui esta evaluando un espacio*) {
        case 'a':
            fraseConvertida += "apa";
            break;
        case 'e':
            fraseConvertida += "epe";
            fraseConvertida = epe
            break;
        case 'i':
            fraseConvertida += "ipi";
            break;
        case 'o':
            fraseConvertida += "opo";
            fraseConvertia = epesopo
            break;
        case 'u':
            fraseConvertida += "upu";
            break;
        default: 
            fraseConvertida += s;
            fraseConvertida == epesopo *agrega el espacio*

            break;
    }

*/