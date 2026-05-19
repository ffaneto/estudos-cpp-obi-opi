#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int tamanho;
    

    cin >> tamanho;

    int array[tamanho];

    for(int i =0; i<tamanho;i++) {
        cin >> array[i];
    }

    sort(array, array + tamanho);

    int maior =1;
    

    for (int inicio = 0; inicio < tamanho; inicio++)
    {
        for(int fim = inicio; fim < tamanho; fim++) {
            if(array[fim] - array[inicio] <=5) {
                int grupo = fim - inicio + 1;
                if(grupo>maior) {
                    maior = grupo;
                }
            } else {
                break;
            }
        }
    }
    
    cout << maior << '\n';

}