#include <iostream>

using namespace std;

int vetorInicial [55];
int vetorFinal[55];

int main() {

	int n;
	cin >> n;

	for(int i =0; i< n; i++) {
		cin >> vetorInicial[i];
	}

	for(int i = 0; i < n; i++) {
	    if (vetorInicial[i] == 1)
	        vetorFinal[i]++;

	    if (i != 0 && vetorInicial[i - 1] == 1)
	        vetorFinal[i]++;

	    if (i < n - 1 && vetorInicial[i + 1] == 1)
	        vetorFinal[i]++;
	}

	for (int i = 0; i < n; i++) {
		cout << vetorFinal[i] << "\n";
	  }

	return 0;
}
