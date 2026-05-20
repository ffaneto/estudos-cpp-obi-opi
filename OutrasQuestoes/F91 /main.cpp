#include <bits/stdc++.h>

using namespace std;

int F91(int x){

    if(x <=100) return F91(F91(x + 11));

    else return x - 10;

}


int main () {

    int N;
    
    while (cin >> N && N !=0) {
        cout << "f91(" << N << ") = " << F91(N) << "\n";
    }
    
}