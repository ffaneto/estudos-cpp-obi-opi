#include <bits/stdc++.h>

using namespace std;



int main () {

    long long dp[51];
    dp[1] = 1;
    dp[2] = 2;
    
    for(int i = 3; i < 50; i++) {
        dp[i] = dp[i-1] + dp[i -2];
    }
    
    int length;
    while(cin >> length && length !=0) {
        cout << dp[length] << '\n';
    }
}