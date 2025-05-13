#include <iostream>
using namespace std;

void selectionSort(int arr[], int siz) {
    for(int i = 0; i < siz - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < siz; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if(minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

void bubbleSort(int arr[], int siz) {
    for(int i = 0; i < siz - 1; i++) {
        bool swapped = false;
        for(int j = 0; j < siz - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

void insertionSort(int arr[], int siz) {
    for(int i = 1; i < siz; i++) {
        int key = arr[i];
        int j = i - 1;
        while(arr[j] >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void printArray(int arr[], int siz) {
    for(int i = 0; i < siz; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}

int main() {

    int arr[] = {29, 10, 14, 37, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array" << endl;
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Sorted array: " << endl;
    printArray(arr, n);

    return 0;
}