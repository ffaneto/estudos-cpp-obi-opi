#include <iostream>
#include <vector>

using namespace std;


int main () {

    int arr [3] = {1,2,0};

    int ana;
    int bea;

    cin >> ana;
    cin >> bea;

    int resultA = arr[ (ana - 1) %3 ];
    int resultB = arr[ (bea - 1) %3 ];

    
    if(resultA == resultB) {
        resultB = (resultB + 1) % 3;
    }

    int resultC = 3 - (resultA + resultB);
    

    cout << resultC << endl;
    

    return 0;
}