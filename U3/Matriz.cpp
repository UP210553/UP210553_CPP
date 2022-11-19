/*
Date: 28/10/2022
Author: Ángel Jesús Martínez Guevara
Email: up210553@alumnos.upa.edu.mx
Description: 
Last modification: 28/10/2022
*/

#include <iostream>

using namespace std;

void llenarareaJuego();
void imprimirareaJuego();
int areaJuego[5][5];
int main(){

    llenarareaJuego();
    imprimirareaJuego();
return 0;
}

void llenarareaJuego(){
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout<<"Enter your value for ["<<row<<"] "<<"["<<col<<"] : ";
            cin>>areaJuego[row][col];
        }

    }
    
    
};
void imprimirareaJuego(){
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout<<areaJuego[row][col]<<" ";
        }
        cout<<endl;
    }
}