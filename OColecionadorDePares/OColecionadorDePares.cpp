#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> pares; 

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num; 

        if(num % 2 == 0) {
            pares.push_back(num); 
        }
    }

    sort(pares.begin(), pares.end());

    for(int i = 0; i < pares.size(); i++) {
        cout << pares[i] << (i == pares.size() - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}