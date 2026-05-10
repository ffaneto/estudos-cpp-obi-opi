#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int tamanho;

    cin >> tamanho;

    vector <int> fita(tamanho);
    vector <int> resultadoFinal(tamanho, 0);

    for (int i = 0; i < tamanho; i++){
        cin >> fita[i];
    }

    for (int i = 0; i < tamanho; i++)
    {
        if(fita [i] == 0) {
            resultadoFinal[i] = 0;
        }

        else {
            int distEsq = 99999;
            int distDir = 99999;

            for(int j = i; j >=0;j--) { // Loop da esquerda
                if(fita [j] ==0) {
                    distEsq = i - j;
                    break;
                }
            }

            for(int k = i; k < tamanho;k++) { // Loop da direita
                if(fita [k] ==0) {
                    distDir = k - i;
                    break;
                }
            }

            int menor = min(distEsq, distDir);

            resultadoFinal[i] = min(menor,9);
        }
    } 


    for(int i =0; i < tamanho; i++) {
        cout << resultadoFinal[i] << (i == tamanho - 1 ? "" : " ");
    }
    
    cout << '\n';
    

    return 0;
}