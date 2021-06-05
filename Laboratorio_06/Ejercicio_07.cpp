#include <iostream>
using namespace std;

int main(void) {
    float ahorros = 0, total = 0;

    for(int i = 0; i < 12; i++) {
        cout << "Nueva cantidad: "; cin >> ahorros;
        total += ahorros;

        if(total >= 250) 
            break;
    }

    if(total < 250) 
        cout << "f" << endl;
    else 
        cout << "felicidades";


    return 0;
}


/*
#include <iostream>
using namespace std;

int main(void) {
    variables necesarias;

    for(for para solicitar los datos durante al año) {
        solicitud de cantidad y operaciones necesarias

        verifacion continua de si ha llegado a la cantidad, de ser así,
        romper el ciclo for
    }

    Indepedientemente de la manera en la que se haya roto el for, 
    verificar si se cumplio con la cantidad o no 

    return 0;
}
*/
