#include <iostream>

using namespace std;

void sort(int a[], int size);


int main() {

    int a[] = {10,1,2,5,7,4,2,3,2};

    int size = sizeof(a)/sizeof(a[0]);

    sort(a,size);

    for(int element : a) {
        cout << element << " ";
    }
}

void sort(int a[], int size) {

    int temp;
    for(int i =0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++){
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
        
    }
}
