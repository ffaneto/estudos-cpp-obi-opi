#include <iostream>

using namespace std;

int MDC(int x, int y) {
    
    if(x < y) {
        int temp = y;
        y = x;
        x = temp;
    }

    if(x % y == 0 ) return y;

    return MDC(y, x%y);
}

int main () {

    int x, y;

    scanf("%d %d", &x, &y);

    cout << MDC(x,y);
}