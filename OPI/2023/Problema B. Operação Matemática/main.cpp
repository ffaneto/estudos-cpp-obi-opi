#include <iostream>

using namespace std;

int main() {
   
    int a;
    int b;
    int c;

    cin >> a >> b >> c;

    if(c == a + b) {
        cout << "+";
    } else {
        cout << "-";
    }
}