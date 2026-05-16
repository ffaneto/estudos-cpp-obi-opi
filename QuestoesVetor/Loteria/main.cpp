#include <iostream>
#include <vector>

using namespace std;

int main () {

    vector <int> apostas(6);

    vector <int> corretas_check(100,0);

    int cont = 0;

    for(int i =0; i < 6; i++) {
        cin >> apostas[i];
    }


    for(int i =0; i <6; i++) {
        int numeroSorteado;
        cin >> numeroSorteado;
        corretas_check[numeroSorteado] = 1;
    }
    
    for(int i =0; i<6; i++) {
        int numQueEleJogou = apostas[i];

        if(corretas_check[numQueEleJogou] == 1) {
            cont++;
        }
    }
    
    if (cont == 3 ) {
        cout << "terno" << "\n";
    } else if (cont == 4 ) {
        cout << "quadra" << "\n";
    } else if (cont == 5 ) {
        cout << "quina" << "\n";
    } else if (cont == 6){
        cout << "sena" << "\n";
    } else {
        cout << "azar" << "\n";
    }

    return 0;
}