#include <iostream>

using namespace std;

int fatorial(int x) {
    if (x == 1 || x == 0) {
        return 1;
    }

    return x * fatorial(x - 1);
}

int main(){

    int x;
    
    cin >> x;

    cout << fatorial(x);
}