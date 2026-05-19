#include <bits/stdc++.h>

using namespace std;

int main() {
    int segundos = 200;

    int minutos = 200 / 60;
    int resto = 200 % 60;

    cout << "Total: " << minutos << " minutos e " << resto << " segundos" << '\n';

    minutos = 130;

    int horas = 130 / 60;
    resto = 130 % 60;

    cout << "Total: " << horas << " horas e " << resto << " minutos";
}