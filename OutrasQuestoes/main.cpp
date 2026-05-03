#include <iostream>

using namespace std;

int main() {

    /* Alocação Estática

    int vet[4] = {1 , 2 , 3, 4};

    cout << "[ ";

    for( int i = 0; i < 4; i++) {
        cout << vet[i] << " ";
    }

    cout << "]"<< endl;

    int x = sizeof(vet)/sizeof(int);
    int y = sizeof(int);

    cout << x << "\n";
    cout << y << "\n"; */

    // Alocação Dinâmica:

    int x;

    cout << "Tamanho do Vetor: ";

    cin >> x;

    int* vetor = new int[x];

    for(int i = 1; i <= x; i++) {
        cout << "Digite o valor do elemento na posição " << i << endl;
        cin >> vetor[i];
    }

    cout << "Vetor: ";

    for(int i = 0; i <=x ; i++) {
        cout << vetor[i] << " ";
    }

    cout << endl;


    return 0;
}