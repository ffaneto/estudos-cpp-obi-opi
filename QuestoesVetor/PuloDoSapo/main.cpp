#include <iostream>
#include <vector>

using namespace std;

int main() {

int M, N;

cin >> N >> M;

vector<int> rio(N + 1, 0);


for(int i =0; i< M; i++) {
    int p, d;
    cin >> p >> d;

    rio[p] = 1;

    int puloPraFrente = p + d;

    while(puloPraFrente <= N) {
        rio[puloPraFrente] = 1;
        puloPraFrente +=d;
    }

    int puloPraTras = p - d;

    while(puloPraTras >= 1) {
        rio[puloPraTras] = 1;
        puloPraTras -=d;
    }
}//a

    for(int i =1; i<=N; i++) {
        cout << rio[i] << '\n';
    }

return 0;
}