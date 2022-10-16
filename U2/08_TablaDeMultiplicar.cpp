/*
Date: 12/10/2022
Author: Ángel de Jesús Martínez Guevara
Email: up210553@alumnos.upa.edu.mx
Description:
Realice un programa que genere al usuario la tabla de multiplicar del numero que desee, hasta que desee  
Last modification: 12/10/2022
*/
//Library and use of std declaration
#include <iostream>
using namespace std;
// Main function and variables declaration
int main(){
    int numTabla, largoTabla;

    // Data entry
    cout<<"What number do you want to multiply?: ";
    cin>>numTabla;
    cout<<"Up to what number do you want the table?: ";
    cin>>largoTabla;
    cout<<endl;
    // Data processing
    for (int contador=1; contador <= largoTabla ; contador++)
    {
        // Data output
        cout<<"|\t"<<contador<<"\t"<<"x"<<"\t"<<numTabla<<"\t"<<"="<<"\t"<<contador*numTabla<<"\t"<<"|"<<endl;
        for (int i = 1; i <= 49; i++)
        {
            cout<<"-";
        }
        cout<<endl;
        

    }
    
    return 0;
}