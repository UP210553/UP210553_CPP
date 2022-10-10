/*
Date: 05/10/2022
Author: Ángel de Jesús Martínez Guevara
Email: up210553@alumnos.upa.edu.mx
Description:
Realizar un programa que lea indefinidamente cantidades de productos y su precio, y al final
indique el total de la factura. Para saber que se ha terminado con la compra, se deberáingresar un 0 en la cantidad.
Last modification: 07/10/2022
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