#include <iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int size) {

    int low = 0, high = size - 1;

    while (low < high) {
        int mid = (low + high) / 2;

        if (arr[mid] < arr[mid + 1]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    return low;

}

int main() {
    
    int arr[] = {0, 2, 4, 6, 5, 4, 3, 2, 1}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    int peakIndex = peakIndexInMountainArray(arr, size);
    cout << "Peak Index: " << peakIndex << endl;

    return 0;

}
