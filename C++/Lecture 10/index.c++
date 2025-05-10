#include<iostream>
using namespace std;

void allDuplicateValue(int arr[], int siz) {

    for(int i = 0; i < siz; i++) {
        int index = abs(arr[i]) - 1;
        if(arr[index] < 0) {
            cout << abs(arr[i]) << " ";
        } else {
            arr[index] = -arr[index];
        }
    }

}

int main() {

    int array[] = {1, 2, 3, 4, 5, 4, 2, 1};
    int size = sizeof(array) /sizeof(array[0]);
    allDuplicateValue(array, size);

    return 0;
}