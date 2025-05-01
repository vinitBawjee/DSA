#include<iostream>
using namespace std;

void sort01(int *arr, int n) {
    int zeroIndex = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            swap(arr[i], arr[zeroIndex]);
            zeroIndex++;
        }
    }
}

int main() {
    int arr[] = {1, 0, 1, 0, 1, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort01(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
