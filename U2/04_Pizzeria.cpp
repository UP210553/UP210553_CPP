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
Last modification: 28/09/2022
*/
#include <iostream>
using namespace std;

int main(){
    int tipoDePizza, ingredientesVeggie, ingrdientesNotVeggie;


    cout<<"Do you want a vegetarian pizza: \n 1=Yes 0=No \n =";
    cin>>tipoDePizza;
    if (tipoDePizza=1){
        cout<<"These are the ingredients available: \n You only can pick one. Remember all the pizzas have mozzarella and tomato sauce. \n 1.Tofu 2.Peppers"<<endl;
        cout<<"Enter the number of the ingredient ";

    }

    return 0;
}