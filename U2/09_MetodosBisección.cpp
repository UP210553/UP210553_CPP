/*
Date: 13/10/2022
Author: Ángel de Jesús Martínez Guevara
Email: up210553@alumnos.upa.edu.mx
Description:
Hacer un programa que realice el tema de la bisección
Last modification: 13/10/2022
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float resolverEcuacion(float valor){
    return pow(valor, 2) + valor - 6;
}

int main(){
    float a, b, c, error = 0.01, ya , yb, yc, equality=1;
    //Data entry 
    cout<<"Give me your (a) value: ";
    cin>>a;
    cout<<"Give me your (b) value: ";
    cin>>b;
    //Data processing
    for (int line = 0; line <= 160; line++)
    {
        cout << "-";
    }
    cout << endl;

    cout << "|\t\t"
         << "a\t\t\t"
         << "b\t\t\t"
         << "c\t\t\t"
         << "ya\t\t\t"
         << "yb\t\t\t"
         << "yc\t\t\t"
         << "|" << endl;

    for (int line = 0; line <= 160; line++)
    {
        cout << "-";
    }
    cout << endl;

    do
    {
        c = (a + b) / 2;
        ya = resolverEcuacion(a);
        yc = resolverEcuacion(c);
        yb = resolverEcuacion(b);

        cout << "|\t\t" << fixed << setprecision(8) << a << "\t\t" << b << "\t\t" << c << "\t\t" << ya << "\t\t" << yb << "\t\t" << yc << "\t\t|" << endl;

        if ((ya * yc) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }

        if (a == b)
        {
            equality = 0;
            break;
        }

        for (int line = 0; line <= 160; line++)
        {
            cout << "-";
        }
        cout << endl;

    } while ((yc >= 0.01) || (yc <= -0.01));

    if (equality == 0)
    {
        //Data output
        cout << "There is no root" << endl;
    }
    else
    {
        //Data output
        cout << "The root of the equation is " << lround(c) << endl;
    }

    return 0;
}