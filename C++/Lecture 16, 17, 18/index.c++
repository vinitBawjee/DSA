#include <iostream>
using namespace std;

void selectionSort(int arr[], int siz) {
    for (int i = 0; i < siz - 1; i++) {
        int min_Index = i;
        for (int j = i + 1; j < siz; j++) {
            if (arr[j] < arr[min_Index]) {
                min_Index = j;
            }
        }
        if (min_Index != i) {
            int temp = arr[i];
            arr[i] = arr[min_Index];
            arr[min_Index] = temp;
        }
    }
}

void printArray(int arr[], int siz) {
    for(int i = 0; i < siz; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

int main() {

    int array[] = {29, 10, 14, 37, 13};
    int n = sizeof(array) / sizeof(array[0]);

    cout << "Original array: " << endl;
    printArray(array, n);
    selectionSort(array, n);
    cout << "sort array: " << endl;
    printArray(array, n);

    return 0;
}