/*
Date: 
Author: 
Email: 
Description: 
Last modification: 
*/

#include <iostream>

using namespace std;

int main(){
    int i=30;
    while (i<35)
    {
        cout<<"\033[0;" <<i << "m"<<"HOLA"<<"\033[0m"<<endl;
        i++;
    }
    
    

return 0;
}