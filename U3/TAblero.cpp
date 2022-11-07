/*
Date: 
Author: 
Email: 
Description: 
Last modification: 
*/

#include <iostream>

using namespace std;
char areaJuego[3][3]={'1','2','3','4','5','6','7','8','9'};
int main(){
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout<<areaJuego[x][y]<<" ";
        }
        cout<<endl;
    }
    
    
return 0;
}