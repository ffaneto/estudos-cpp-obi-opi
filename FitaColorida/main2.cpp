#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {

    int n;
    cin >> n;

    vector <int> fita(n);
    vector <int> resultado(n);

    for (int i = 0; i < n; i++) {
        cin >> fita[i];
    }

    int ultimo_zero = -99999;

    for (int i = 0; i < n; i++) {
        if (fita[i] == 0) {
            ultimo_zero = i; 
        }
        resultado[i] = i - ultimo_zero; 
    }

    ultimo_zero = 99999;

    for (int i = n - 1; i >= 0; i--) {
        if (fita[i] == 0) {
            ultimo_zero = i; 
        }
        
        int dist_direita = ultimo_zero - i;
    
        resultado[i] = min(resultado[i], dist_direita);
    }

    for (int i = 0; i < n; i++) {

        int tom_final = min(resultado[i], 9);
        
        cout << tom_final;
        
        if (i < n - 1) {
            cout << " ";
        }
    }

    cout << '\n';

    return 0;
}