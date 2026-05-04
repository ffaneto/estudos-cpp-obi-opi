#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {

    vector <int> arr(13,0);
    int n;
    cin >> n;
    

    for(int i =0; i < n; i++) {
        int dado;
        cin >> dado;
        arr[dado]+= 1;
    }

    int recorde = 0;

    for(int i =0; i <= 12; i++) {
        if(arr[i] > recorde) {
            recorde = arr[i];
        }
    }

    for(int i =0; i <= 12; i++) {
        if (arr[i] == recorde) {
            cout << i << " ";
        }
    }

    return 0;
}