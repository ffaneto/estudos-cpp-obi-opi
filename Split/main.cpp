#include <iostream>
#include <vector>

using namespace std;

int main() {

    int total;
    cin >> total;
    vector <int> vetor (total,0);

    for(int i =0; i< total; i++) {
        cin >> vetor[i];
    }

    int maiorValor = vetor[0];
    int indiceMaior = 0;

    for (int i =0; i < total; i++) {
        if(vetor[i] > maiorValor) {
            maiorValor = vetor[i];
            indiceMaior = i;
        }
    }
    

    int somaPre = 0;
    int somaPos = 0;

    for(int i =0; i < total; i++) {
        if(i < indiceMaior) {
            somaPre += vetor[i];
        } else if(i > indiceMaior) {
            somaPos += vetor[i];
        }
    }

    cout << somaPre <<'\n';
    cout << somaPos <<'\n';

    return 0;
}