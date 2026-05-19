#include <bits/stdc++.h>

using namespace std;

void bubbleSort(int a [], int length);

int main() {
    int a [] = {3,2,4,1};

    int length = 4;

    bubbleSort(a, length);

    for(int i =0; i< length; i++) {
        cout << a[i] << " ";
    }
    cout << '\n';

}

void bubbleSort(int a[], int length) {

    bool swapped;
    int i =0;

    do {
        swapped = false;

        for(int j = 0; j< length - 1 - i; j++) {
            if(a[j] > a[j+1] ) {
                int temp = a[j];
                a[j]= a[j+1];
                a[j+1]= temp;
                swapped = true;
            }
        }
        i++;
        }while(swapped);
    }



