#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main () {

    vector <int> vetor(10);
    vector <int> vetorPar;
    vector <int> vetorImpar;

    for(int i = 0; i < 10; i ++) {
        cin >> vetor[i];

        if(vetor [i] % 2 ==0 ) {
            vetorPar.push_back(vetor[i]);
        } else {
            vetorImpar.push_back(vetor[i]);
        }
    }


    for (int i =0; i < vetorPar.size(); i++) {
        cout << vetorPar[i] << " ";
    }

    cout << endl;

    for (int i =0; i < vetorImpar.size(); i++) {
        cout << vetorImpar[i] << " ";
    }

    cout << endl;


    return 0;
}