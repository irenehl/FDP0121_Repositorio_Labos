/* Andrea y Miguel han decidido ir al Supermercado, si el monto total de sus compras 
es mayor o igual $200.00 el supermercado les dará un 10% de descuento en su total 
a pagar, si su monto total es mayor o igual a $300.00, se les dará un descuento del 
15%, y si su monto es menor o igual a $199.99, se les dará un descuento del 5%. 
Determine, dependiendo del valor ingresado por Andrea y Miguel, el valor que 
pagarán al final de su compra. */

#include <iostream>
using namespace std;

int main(void) {
    float monto = 0;

    cout << "Digite monto: "; cin >> monto;

    if(monto >= 200 && monto <= 299.99) {
        monto = (monto - (monto * (1 - 0.90)));
        cout << "Nuevo monto: " << monto << endl;
    }
    else if(monto >= 300) {
        monto = (monto - (monto * (1 - 0.85)));
        cout << "Nuevo monto: " << monto << endl;
    }
    else {
        monto = (monto - (monto * (1 - 0.95)));
        cout << "Nuevo monto: " << monto << endl;
    } 

    return 0;
}