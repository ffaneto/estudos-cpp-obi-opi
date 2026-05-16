#include <bits/stdc++.h>

using namespace std;

int main(){
    int M[3][3];

    for(int i =0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
           cin >> M[i][j];
        }
    }

    int maiorValor = M[0][0];

    for(int i =0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
           if(M[i][j] > maiorValor) {
            maiorValor = M[i][j];
            }
        }
    }

    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int valorParaImprimir = (M[i][j] == maiorValor) ? -1 : M[i][j];
            cout << valorParaImprimir;

            if (j < 2) {
                cout << " ";
            }
        }
        cout << '\n';
    }


}