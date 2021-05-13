/*
Escriba un programa que calcule el valor de la distancia recorrida (m) para un  objeto que se mueve a velocidad constante (m/s), durante un tiempo dado en  segundos. Utilice para ello la fórmula d = v * t. Escoja el tipo apropiado para  declarar cada variable. Además de desplegar el valor de la distancia recorrida,  también despliegue la dirección de memoria RAM en la que se encuentra cada una  de las tres variables del problema. 
*/

#include <iostream>
using namespace std;

int main(void) {
    int velocidad = 0, tiempo = 0, distancia = 0;

    cout << "Velocidad: "; cin >> velocidad;
    cout << "Tiempo: "; cin >> tiempo;

    distancia = velocidad * tiempo;

    cout << "Distancia: " << distancia;

    cout << "\nUbicacion distancia: " << &distancia;
    cout << "\nUbicacion velocidad: " << &velocidad;
    cout << "\nUbicacion tiempo: " << &tiempo;

    return 0;
}