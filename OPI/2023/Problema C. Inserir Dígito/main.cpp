#include <bits/stdc++.h>

using namespace std;



int main() {
    
    string n;
    char k;
    
    string maior = "";

    cin >>n >> k;

    
    for(int i =0; i<=n.size();i++) {
        string inserido = n.substr(0,i) + k + n.substr(i);

        if(inserido > maior) {
            maior = inserido;
        }
    }

    cout << maior << '\n';
}