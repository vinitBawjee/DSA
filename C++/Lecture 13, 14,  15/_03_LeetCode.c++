#include <iostream>
using namespace std;

int findPivotInRotatedArray(int arr[], int siz) {
    int low = 0, high = siz - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > arr[high]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    return low; 
}

int main() {

    int array[6] = {6, 5, 1, 2, 3, 4};
    int size = sizeof(array) / sizeof(array[0]);
    int pivotIndex = findPivotInRotatedArray(array, size);

    cout << "Pivot index (smallest element) is: " << pivotIndex << endl;
    cout << "Pivot element is: " << array[pivotIndex] << endl;

    return 0;

}
