/* Unidad 1. Tipos de datos
   Autor: Ángel de Jesús Martínez Guevara
   Fecha: 18/09/2022
   Descripción: Muestra los diferentes tipos de datos en c++
*/

#include <iostream>
using namespace std;

int main()
{
  
    int entero = 4;
    float flotante = 2.565465654654;
    double grande = 2.565465654654;
    char caracter = 36;
    
    cout << "Este programa muestra los tipos de datos. \n";
    cout << "El número entero es: " << entero << endl;
    cout << "El tamaño del entero es: " << sizeof(entero) << " bytes" << endl;
    cout << "El número flotante es: " << flotante << endl;
    cout << "El tamaño del flotante es: " << sizeof(flotante)<< " bytes" << endl;
    cout << "El número double es: " << grande << endl;
    cout << "El tamaño del double es: " << sizeof(grande)<< " bytes" << endl;
    cout << "El caracter char es: " << caracter << endl;
    cout << "El tamaño del char es: " << sizeof(caracter)<< " byte" << endl;
    
    cout << "==========================================" << endl;
    return 0;
    }
