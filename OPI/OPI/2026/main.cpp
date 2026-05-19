#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string sU = s;
    string sL = s;


    for(int i = 0; i < s.size(); i++) {
        sU[i] = toupper(s[i]);
        sL[i] = tolower(s[i]);
    }

    bool ehCoisavel = false;
    for(int i = 0; i < s.size(); i++) {
        if(i % 2 == 0) {
            if(s[i] == sL[i])
                ehCoisavel = true;
        }
        if(i % 2 != 0) {
            if(s[i] == sU[i])
                ehCoisavel = true;
        }
    }

    if(ehCoisavel)
        cout << "SIM";
    else
        cout << "NÃO";
}