#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector <int> nums(n);
    
    int target;

    for(int i =0; i<n; i++) {
        cin >> nums[i];
    }

    int valores[2] = {0,0};

    cin >> target;

    for(int i =0; i< nums.size();i++) {
        for (int j = 0; j < i; j++)
        {
            if(nums[i] + nums[j] == target) {
                cout << "[" << i << "," << j << "]";
                return 0;
            }
        }   
    }
}