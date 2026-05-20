#include <iostream>

using namespace std;

int modulo(int x) {

    if(x>0) return x; 

	return -x;
}


int main(){
    int a = -3;

    cout << modulo(a);
}
