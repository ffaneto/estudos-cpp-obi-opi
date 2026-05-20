#include <iostream>

using namespace std;

int ciclo(int n){
    int cont = 1;

    while(n!=1) {
        if(n % 2 !=0) {
            n = 3 * n + 1;
        } else {
            n = n/2;
        }
        cont++;
    }
    return cont;
}

int main(){

    int i, j;

    while(cin >> i >> j) {
        int inicio = min(i,j);
        int fim = max(i,j);

        int maximo = 0;

        for(int n = inicio; n <=fim;n++) {
            int c = ciclo(n);
            if (c > maximo)
                maximo = c;
        }

        cout << i << " " << j << " " << maximo << "\n";
    }


}