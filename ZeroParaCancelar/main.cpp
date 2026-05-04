#include <iostream>
#include <vector>

using namespace std;

int main () {

    int sum = 0;
    vector <int> dados;

    int n;
    cin >> n;

    for(int i =0; i <n; i++) {
        int atual;
        cin >> atual;

        if(atual == 0) {
            if (!dados.empty()) {
                dados.pop_back();
            }
        } else {
            dados.push_back(atual);
        }
    }

    for (int i = 0; i < dados.size(); i++) {
        sum += dados[i];
    }
    

    cout << sum;


    return 0;
}