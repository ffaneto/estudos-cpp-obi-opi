#include <iostream>

using namespace std;


int main() {

	int a;
	int b;

	cin >> a;
	cin >> b;

	cout << (a + b) / 2 << endl;

	if ( a > b) {
		cout << "Yay" << endl;
	} else if (b > a){
		cout << "Dont be afraid to catch feels" << endl;
	} else {
		cout << "Just want feel it for you" << endl;
	}

}
