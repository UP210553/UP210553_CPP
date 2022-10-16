/*
Date: 03/10/2022
Author: Ángel de Jesús Martínez Guevara
Email: up210553@alumnos.upa.edu.mx
Description:
Hacer un programa en el que se ingresen 6 temperaturas y determine el promedio, la mas
baja y la mas alta
Last modification: 03/10/2022
*/
//Library and use of std declaration
#include <iostream>
using namespace std;
// Main function and variables declaration
int main()
{
    int contador = 0;
    float tempAcum = 0, temperatura, tempMayor = -273, tempMenor = 100000;

    do
    {
        // Data entry
        cout << "Give me the temperature: ";
        cin >> temperatura;
        // Data processing
        tempAcum += temperatura;
        contador++;
        if (temperatura >= tempMayor)
        {
            tempMayor = temperatura;
        }
        if (temperatura <= tempMenor)
        {
            tempMenor = temperatura;
        }
    } while (contador < 6);
    // Data output
    cout << "The average of temperature is: " << tempAcum / 6 << "°C" << endl;
    cout << "The lower temperature is: " << tempMenor << "°C" << endl;
    cout << "The highest temperature is: " << tempMayor << "°C" << endl;

    return 0;
}