#include <iostream>

using namespace std;


int shop(int emptyBottle) {

    int total = 0;

    while(emptyBottle >= 2) {
        if(emptyBottle >=3) {
            int full = emptyBottle / 3;
            int rest = emptyBottle % 3;
            total += full;
            emptyBottle = full + rest;
        } else {
            total++;
            break;
        }
    }

    return total;
}

int main() {

    int emptyBottle;

    while (cin >> emptyBottle && emptyBottle !=0)
    {
        cout << shop(emptyBottle) << '\n';
    }
    
}