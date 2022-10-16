/*
Date: 28/09/2022
Author: Ángel de Jesús Martínez Guevara
Email: up210553@alumnos.upa.edu.mx
Description:
La pizzería Bella Napoli ofrece pizzas vegetarianas y no vegetarianas a sus clientes. Los ingredientes para cada tipo
de pizza aparecen a continuación.
Ingredientes vegetarianos: Pimiento y tofu.
Ingredientes no vegetarianos: Peperoni, Jamón y Salmón.
Escribir un programa que pregunte al usuario si quiere una pizza vegetariana o no, y en función de su respuesta
le muestre un menú con los ingredientes disponibles para que elija. Solo se puede eligir un ingrediente además
de la mozzarella y el tomate que están en todas las pizzas.
Al final se debe mostrar por pantalla si la pizza elegida es vegetariana o no y todos los
ingredientes que lleva.
Last modification: 29/09/2022
*/
//Library and use of std declaration
#include <iostream>
using namespace std;

// Main function and variables declaration
int main()
{
    int tipoDePizza, ingredientesVeggie, ingrdientesNotVeggie;

    // Data entry
    cout << "Do you want a vegetarian pizza: \n 1=Yes 0=No  \n =";
    cin >> tipoDePizza;
    // Data processing
    if (tipoDePizza == 1)
    {
        cout << "These are the ingredients available for the vegetarian pizza: \n You only can pick one. Remember all the pizzas have mozzarella and tomato sauce. \n 1.Tofu 2.Peppers " << endl;
        cout << "=====================================================================" << endl;
        cout << "Enter the number of the ingredient you want: " << endl;
        cin >> ingredientesVeggie;
        cout << "=====================================================================" << endl;
        if (ingredientesVeggie == 1)
        {
             // Data output
            cout << "Your pizza will be vegetarian with tofu " << endl;
        }
        else if (ingredientesVeggie == 2)
        {
            // Data output
            cout << "Your pizza will be vegetarian with peppers " << endl;
        }
        else
        {
            // Data output
            cout << "Error start over, make sure you enter the data correctly please.";
        }
    }
    else if (tipoDePizza == 0)
    {
        cout << "These are the ingredients available for the not vegetarian pizza: \n You only can pick one. Remember all the pizzas have mozzarella and tomato sauce. \n 1.Peperoni 2.Ham 3.Salmon " << endl;
        cout << "=====================================================================" << endl;
        cout << "Enter the number of the ingredient you want: " << endl;
        cin >> ingrdientesNotVeggie;
        cout << "=====================================================================" << endl;
        if (ingrdientesNotVeggie == 1)
        {
            // Data output
            cout << "Your pizza will not be vegetarian with peperoni " << endl;
        }
        else if (ingrdientesNotVeggie == 2)
        {
            // Data output
            cout << "Your pizza will not be vegetarian with ham " << endl;
        }
        else if (ingrdientesNotVeggie == 3)
        {
            // Data output
            cout << "Your pizza will not be vegetarian with salmon " << endl;
        }
        else
        {
            // Data output
            cout << "Error start over, make sure you enter the data correctly please.";
        }
    }
    else
    {
        cout << "=====================================================================" << endl;
        // Data output
        cout << "Error start over, make sure you enter the data correctly please.";
    }

    return 0;
}