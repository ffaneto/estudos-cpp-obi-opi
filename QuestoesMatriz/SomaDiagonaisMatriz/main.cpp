#include <bits/stdc++.h>

using namespace std;

int main() {

    int M[3][3];
    int somaP = 0;
    int somaS = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j<3 ; j++) {
            scanf("%d",&M[i][j]);
        }
    }

    for(int i =0; i < 3; i++) {
        for(int j = 0; j<3 ; j++) {
            if(i == j) {
                somaP +=M[i][j];
            }

            if(i + j == 2) {
                somaS +=M[i][j];
            }
        }
    }

    cout << "Principal: " << somaP << '\n';
    cout << "Secundária: " << somaS << '\n';

    // Melhor pois não precisa do segundo for:

    printf("Principal: %d", M[0][0]+M[1][1]+M[2][2]);
    cout << '\n';
    printf("Secundária: %d", M[0][2]+M[1][1]+M[2][0]);

    return 0;
}