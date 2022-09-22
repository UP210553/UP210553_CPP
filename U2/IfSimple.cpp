/* 
Date: 22/09/2022
Author: Ángel de Jesús Martínez Guevara
Email: up210553@alumnos.upa.edu.mx
Description: Condicionales
Last modification: 22/09/2022
*/
#include <iostream>

using namespace std;

int main(){
    int numero;
    int dato = 1;

    cout<< "Ingresa un número entero: ";
    cin>>numero;
    if (numero==dato){
        cout<<"El número es igual al dato"<< endl;
    }
    if (numero>dato){
        cout<<"El número es mayor al dato"<< endl;
    }
    if (numero<dato){
        cout<<"El número es menor al dato"<<endl;
    }
    if (numero!=dato){
        cout<<"El número es diferente del dato"<<endl;
    }
    if (numero<=dato){
        cout<<"El número es menor o igual al dato"<<endl;
    }
    if (numero>=dato){
        cout<<"El número es mayor o igual al dato"<< endl;
    }



    return 0;
    

}
