/* 
Date: 21/09/2022
Author: Ángel de Jesús Martínez Guevara
Email: up210553@alumnos.upa.edu.mx
Description: Primer trabajo programación
Last modification: 21/09/2022
*/
#include <iostream>
using namespace std;

int main(){
    int entero;
    float flotante;
    double grande;
    char caracter;

    cout<<"==============================================================="<<endl;
    cout<< "Este programa muestra los datos introducidos por el usuario. \n";
    cout<< "Introduce un dato de tipo entero ej:54 : "; 
    cin>>entero;
    cout<< "Introduce un dato de tipo flotante ej:12.56 : ";
    cin>>flotante;
    cout<< "Introduce un dato de tipo double ej:4.2256376 : ";
    cin>>grande;
    cout<< "Introduce un dato de tipo caracter ej:h : ";
    cin>>caracter;
    cout<<"==============================================================="<<endl;
    cout<< "El dato entero ingresado es: "<< entero << endl;
    cout<< "El dato flotante ingresado es: "<< flotante << endl;
    cout<< "El dato double ingresado es: "<< grande << endl;
    cout<< "El dato char ingresado es: "<< caracter << endl;
    cout<<"==============================================================="<<endl;
    printf("Usando la función printf y scanf\n");
    printf("Ingresa un dato de tipo entero: ");
    scanf("%d", &entero);
    printf("Ingresa un dato de tipo flotante: ");
    scanf("%f", &flotante);
    printf("Ingresa un dato de tipo double: ");
    scanf("%lf", &grande);
    printf("Ingresa un dato de tipo caracter: ");
    scanf("%s", &caracter);
    printf("El dato ingresado es: %i \n", entero);
    printf("El dato ingresado es: %f \n", flotante);
    printf("El dato ingresado es: %lf \n", grande);
    printf("El dato ingresado es: %c \n", caracter);
    cout<<"==============================================================="<<endl;
    


    


    return 0;
    
}
