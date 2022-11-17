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
      int x = 0, y = 0;
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 9; col++)
        {
            if (row == 1 || row == 3)
            {
                cout << "-";
            }
            else if (col == 1 || col == 4 || col == 7)
            {
                if (areaJuego[x][y] == 'X')
                {
                    cout << "\033[0;34m" << areaJuego[x][y] << "\033[0m";
                }else if (areaJuego[x][y] == 'O')
                {
                    cout << "\033[0;31m" << areaJuego[x][y] << "\033[0m";
                } else
                {
                    cout << areaJuego[x][y];
                }
                
                
                
                y++;
            }
            else
            {
                cout << " ";
            }
            if (col == 2 || col == 5)
            {
                cout << "|";
            }
        }
        cout << "\n";
        if (row % 2 == 0)
        {
            x++;
        }

        y = 0;
    }
    
    
return 0;
}