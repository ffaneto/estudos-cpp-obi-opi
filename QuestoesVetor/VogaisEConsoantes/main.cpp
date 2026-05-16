#include <iostream>
#include <string>

using namespace std;


int main() {

	string palavra;
	string vogais = "";
	string consoantes = "";
	cin >> palavra;

	int length = palavra.length();

	for(int i =0; i < length; i++) {

		char letra = palavra[i];

		if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
			vogais += letra;
		} else{
			consoantes += letra;
		}
	}

	cout << "Vogais: " << vogais << "\n";
	cout << "Consoantes: " << consoantes << "\n";

	return 0;
}
