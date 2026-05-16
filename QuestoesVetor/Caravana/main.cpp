#include <iostream>
#include <vector>

using namespace std;

int main () {

    int total;
    int media;
    int cont = 0;

    cin >>total;

    vector <int> camelos(total, 0);

    for(int i =0; i < total; i++) {
        int atual;
        cin >> atual;
        cont += atual;
        camelos[i] = atual;
    }

    media = cont / total;

    for(int i =0; i < total; i++) {
        int resultadoPraCadaCamelo = media - camelos[i];
        cout << resultadoPraCadaCamelo << '\n';
    }

    return 0;
}