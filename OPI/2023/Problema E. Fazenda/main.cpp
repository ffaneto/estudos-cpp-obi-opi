#include <iostream>
#include <vector>


using namespace std;


bool achar(int l, int c, vector<vector<char>>m);

int main() {
   
    int l;
    int c;

    cin >> l >> c;

    vector<vector<char>> m(l, vector<char>(c));

    for(int i =0; i < l; i++) {
        for (int j = 0; j < c; j++){
            cin >> m[i][j];
        }
    }

    if(achar(l,c,m)) 
        cout << "SIM";
    else
        cout << "NÃO";

}

bool achar(int l, int c, vector<vector<char>> m) {
    bool acheiOvelha = true;

    for(int i =0; i < l; i++) {
        for (int j = 0; j < c; j++){
            if(m[i][j] == 'L') {

                if((i-1) >= 0 && m[i-1][j] == 'O') acheiOvelha = false;
                if((i+1) <  l && m[i+1][j] == 'O') acheiOvelha = false;
                if((j-1) >= 0 && m[i][j-1] == 'O') acheiOvelha = false;
                if((j+1) <  c && m[i][j+1] == 'O') acheiOvelha = false;


            }
        }
    }

    return acheiOvelha;
}