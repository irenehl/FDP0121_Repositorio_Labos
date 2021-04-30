/*
Realice un programa que calcule el CUM de una persona, recuerde que para  calcular el CUM se necesita saber la cantidad de UV’s que tiene la materia junto con  la nota obtenida en la materia. Ayúdese de la siguiente tabla: 

Materia     Nota    Uvs
Precalculo    8     4      32
Funda         10    4      40
Discreta      7.5   3     22.5
Elementos      7    4      28

                    15     122.5
CUM = 8.17
*/

#include <iostream>
using namespace std;

int main(void) {
    float precalculo = 0, funda = 0, discreta = 0, elementos = 0, totalMultiplicacion = 0, cum = 0;
    int uvPreca = 0, uvFunda = 0, uvDiscreta = 0, uvElementos = 0, totalUV = 0;

    cout << "Nota preca: "; cin >> precalculo;
    cout << "UV preca: "; cin >> uvPreca;

    cout << "Nota funda: "; cin >> funda;
    cout << "UV Funda: "; cin >> uvFunda;

    cout << "Nota discreta: "; cin >> discreta;
    cout << "UV discreta: "; cin >> uvDiscreta;

    cout << "Nota elementos: "; cin >> elementos;
    cout << "UV elementos: "; cin >> uvElementos;

    totalMultiplicacion = ((precalculo * uvPreca ) + (funda * uvFunda) + (discreta * uvDiscreta) + (elementos * uvElementos));
    totalUV = (uvPreca + uvFunda + uvDiscreta + uvElementos);

    cum = (totalMultiplicacion / totalUV);

    cout << "CUM: " << cum;

    return 0;
}