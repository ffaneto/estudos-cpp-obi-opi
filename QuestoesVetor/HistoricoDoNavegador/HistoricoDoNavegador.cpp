#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    
    int op;

    cin >> op;

    vector <int> vect;
    


    for(int i =0; i<op; i++) {
        int num;
        cin >> num;

        if(num == 1) {
            int pagina;
            cin >> pagina;
            vect.push_back(pagina);
        } else if(num == 2) {
            if(!vect.empty()) {
                vect.pop_back();
            }
        }
    }

    cout << vect.size() << "\n";

    for(int i =0; i < vect.size(); i++) {
        cout << vect[i] << (i == vect.size() - 1 ? "" : " ");
    }


    return 0;
}