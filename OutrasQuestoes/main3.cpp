#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr [3];

int main() {

    arr[0] = 1;

    cout << "Valores do Array Primitivo: " << endl;

    for(int i =0; i< 3; i++) {
        cout << arr[i] << " ";
    }

    cout << "" << endl;

    int tamanho;
    int tamanho2;

    cout << "Digite o Tamanho do Primeiro Vetor: ";
    cin >> tamanho;

    vector <int> vetor1;
    

    for(int i =0; i< tamanho; i++) {
        
        cout << "Digite o valor do elemento na posição " << i + 1 << " do primeiro vetor: ";

        int temp;
        cin >> temp;

        vetor1.push_back(temp);
        
    }

    for(int i = 0; i < vetor1.size(); i++) {
        cout << vetor1[i] << " ";
    }

    cout << endl;

    cout << "Digite o Tamanho do Segundo Vetor: ";

    cin >> tamanho2;

    vector <int> vetor2(tamanho2);

    for(int i =0; i < tamanho2; i++) {
        cout << "Digite o valor do elemento na posição" << i + 1 << " do segundo vetor: ";
        cin >> vetor2[i];
    }

    for(int i =0; i< vetor2.size(); i++) {
        cout << vetor2[i] << " ";
    }

    cout << endl;

    cout << "Tamanho dos 2 vetores: " << "\n";

    cout << vetor1.size() << "\n";
    cout << vetor2.size() << "\n";

    cout << "Estão vazios? " << "\n";

    cout << vetor1.empty() << "\n";
    cout << vetor2.empty() << "\n";

    cout << "Os 2 vetores Ordenados de Forma Crescente: " << "\n";

    sort(vetor1.begin(), vetor1.end());
    sort(vetor2.begin(), vetor2.end());

    for(int i = 0; i < vetor1.size(); i++) {
        cout << vetor1[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < vetor2.size(); i++) {
        cout << vetor2[i] << " ";
    }

    cout << endl;

    cout << "Os 2 vetores Ordenados de Forma Decrescente: " << "\n";

    sort(vetor1.rbegin(), vetor1.rend());

    sort(vetor2.rbegin(), vetor2.rend());

    for(int i = 0; i < vetor1.size(); i++) {
        cout << vetor1[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < vetor2.size(); i++) {
        cout << vetor2[i] << " ";
    }

    return 0;
}