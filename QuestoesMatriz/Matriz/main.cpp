#include <iostream>

using namespace std;

int main () {
    int matriz[2][3];

    matriz[0][0] = 11;
    matriz[0][1] = 12;
    matriz[0][2] = 13;

    matriz[1][0] = 14;
    matriz[1][1] = 15;
    matriz[1][2] = 16;

    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j]<< " ";
        }
        cout << '\n';
    }

    int matriz2[3][3] = {{1,2,3}, 
                         {4,5,6}, 
                         {7,8,9}};

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz2[i][j]<< " ";
        }
        cout << '\n';
    }
    

}