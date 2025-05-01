#include<iostream>
using namespace std;

void AllDuplicates(int arr[], int siz) {
    cout << "Duplicate elements are: ";

    for (int i = 0; i < siz; i++) {
        int index = abs(arr[i]) - 1; 

        if (arr[index] < 0) {
            cout << abs(arr[i]) << " ";
        } else {
            arr[index] = -arr[index];
        }
    }
    cout << endl;
}

int main () {
    int arr[] = {4,3,2,7,8,2,3,1};
    int siz = sizeof(arr) / sizeof(arr[0]);

    AllDuplicates(arr, siz);

    return 0;
}
