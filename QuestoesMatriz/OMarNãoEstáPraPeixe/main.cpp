#include <iostream>

using namespace std;

int mar[101][101];

int main () {

    int n;
    cin >> n;

    for(int k =0; k < n; k++) {
        int xi, xf, yi,yf;
        cin >> xi >> xf >> yi >> yf;    
    
    
    for(int i = xi; i < xf; i++) {
        for(int j = yi; j < yf; j++) {
            mar[i][j] = 1;
        }
    }
}

    int areaTotal = 0;

    for(int i =0; i < 101; i++) {
        for(int j = 0; j< 101; j++) {
            if(mar[i][j] == 1) {
                areaTotal++;
            }
        }
    }


    cout << areaTotal << '\n';


    return 0;
}