/*
Date: 05/10/2022
Author: Ángel de Jesús Martínez Guevara
Email: up210553@alumnos.upa.edu.mx
Description:
Hacer un programa en el que se ingresen 6 temperaturas y determine el promedio, la mas
baja y la mas alta
Last modification: 05/10/2022
*/
#include <iostream>
using namespace std;

int main()
{
    int cantidadDeProductos;
    float precioDeProducto, totalFactura=0;
    do
    {
        cout << "How many products were sold: ";
        cin >> cantidadDeProductos;
        if (cantidadDeProductos != 0)
        {
            cout << "Introduce the price of the product: $";
            cin >> precioDeProducto;
    
        }
        totalFactura += (cantidadDeProductos*precioDeProducto);
    } while (cantidadDeProductos > 0);
    cout << "Processing the payment...\n Total cost= $" << totalFactura << endl;

    return 0;
}