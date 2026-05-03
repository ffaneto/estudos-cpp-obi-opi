#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    vector <int> notas;

    int notaAtual;

    while (cin >> notaAtual && notaAtual != -1) {
        notas.push_back(notaAtual);        
    }

    sort(notas.begin(), notas.end());

    for(int i =0; i < notas.size(); i++) {
        cout << notas[i]<< " ";
    }


    return 0;
}