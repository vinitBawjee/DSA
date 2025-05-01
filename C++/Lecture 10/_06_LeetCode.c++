#include<iostream>
using namespace std;

void tripletSum(int arr[], int siz, int s) {
    bool found = false;

    for(int i = 0; i < siz - 2; i++) {
        for(int j = i + 1; j < siz - 1; j++) {
            for(int k = j + 1; k < siz; k++) {
                if(arr[i] + arr[j] + arr[k] == s) {
                    int a = arr[i], b = arr[j], c = arr[k];

                    // Sort the triplet manually
                    if(a > b) swap(a, b);
                    if(b > c) swap(b, c);
                    if(a > b) swap(a, b);

                    cout << a << " " << b << " " << c << endl;
                    found = true;
                }
            }
        }
    }

    if(!found) {
        cout << "-1\n";
    }
}

int main () {
    int arr[] = {1, 3, 2, 4, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = 6;

    tripletSum(arr, n, s);

    return 0;
}
