/*
Date: 07/10/2022
Author: Ángel de Jesús Martínez Guevara
Email: up210553@alumnos.upa.edu.mx
Description:
Realice un programa que realice la conversión de binario a decimal, solo para números
enteros mayores a 0. El resultado puede ser mostrado mediante una variable entera o en unconjunto de caracteres
Last modification: 10/10/2022
*/
#include <iostream>
using namespace std;

int main()
{
    int decimal;
    string resultado;
    do
    {
        cout << "Enter the integrer you want to convert to binary: ";
        cin >> decimal;
        if (decimal > 0)
        {
            while (decimal > 0)
            {
                resultado = (decimal % 2 == 0) ? "0" + resultado : "1" + resultado;
                decimal /= 2;
            }
        }
        else if (decimal == 0)
        {
            cout << "Your result is: 0" << endl;
        }
        else
        {
            cout << "ERROR. Please enter an integrer different to zero " << endl;
        }
    } while (decimal != 0);
    cout << "Your result is: " << resultado << endl;

    return 0;
}