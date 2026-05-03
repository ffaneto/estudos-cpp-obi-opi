#include <iostream>
using namespace std;

int main() {
    double renda;
    cin >> renda;

    if(renda <= 2112) {
        cout << "0%" << "\n";
    } else if (renda <= 3000) {
        cout << "30%" << "\n";
    } else {
        cout << "Fresquin";
    }

    int minha_altura = 175;
    int altura_inimigo;

    cin >> altura_inimigo;

    if(minha_altura > altura_inimigo) {
        cout << "Uau" << "\n";
    } else {
    	cout << "Hamud";
    }

    return 0;
}
