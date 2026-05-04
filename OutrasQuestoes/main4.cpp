#include <iostream>
#include <vector>

using namespace std;


int main() {
    
    vector <int> checklist(1001,0);

    int n;
    cin >> n;

    for(int i =0; i < n ; i++) {
        int numero;
        cin >> numero;

        checklist[numero] = 1;
        if(checklist[numero] !=1) {
            cout << checklist[numero];
        }

    }

    for(int i =1; i <= 1001 ; i++) {
        if(checklist[i] == 0 ) {
            cout << i << " ";
        }
    }

    cout << endl;
    

    return 0;
}