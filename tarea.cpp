#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Inicializar variable cantidadDePersonas 
    int cantidadDePersonas;

    // Pedir cantidad de personas del grupo
    cout << "Porfavor insertar cantidad de personas del grupo: " << endl;
    
    // asignar valor a variable cantidadDePersonas
    cin >> cantidadDePersonas;

    // Inicializar variable resultado para luego
    int resultado;
    if (cantidadDePersonas >= 10)
    {
        // Si la cantidad de personas es mayor o igual a 10 la variable resultado sera igual a 150 por cantidadDePersonas
        resultado = 150 * cantidadDePersonas;
    }
    else
    {
        // Si la cantidad de personas es menor a 10 la variable resultado sera igual a 300 por cantidadDePersonas
        resultado = 300 * cantidadDePersonas;
    }

    // desplegar el monto a pagar que es igual a la variable resultado
    cout << "El monto a pagar por el grupo es: " << resultado << endl;
    return 0;
}