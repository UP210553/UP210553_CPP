/*
Date: 28/10/2022
Author: Ángel Jesús Martínez Guevara
Email: up210553@alumnos.upa.edu.mx
Description: 
Last modification: 28/10/2022
*/

#include <iostream>

using namespace std;

void llenarMatriz();
void imprimirMatriz();
int matriz[5][5];
int main(){

    llenarMatriz();
    imprimirMatriz();
return 0;
}

void llenarMatriz(){
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout<<"Enter your value for ["<<row<<"] "<<"["<<col<<"] : ";
            cin>>matriz[row][col];
        }

    }
    
    
};
void imprimirMatriz(){
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout<<matriz[row][col]<<" ";
        }
        cout<<endl;
    }
}