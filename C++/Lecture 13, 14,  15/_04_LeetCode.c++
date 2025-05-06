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

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int searchInRotatedArray(int arr[], int size, int target) {
    int pivot = findPivotInRotatedArray(arr, size);

    if (target >= arr[pivot] && target <= arr[size - 1]) {
        return binarySearch(arr, pivot, size - 1, target);
    }
    
    return binarySearch(arr, 0, pivot - 1, target);
}

int main() {
    int array[6] = {6, 5, 1, 2, 3, 4};
    int size = sizeof(array) / sizeof(array[0]);
    int pivotIndex = findPivotInRotatedArray(array, size);

    cout << "Pivot index (smallest element) is: " << pivotIndex << endl;
    cout << "Pivot element is: " << array[pivotIndex] << endl;

    int target = 2;
    int foundIndex = searchInRotatedArray(array, size, target);

    if (foundIndex != -1)
        cout << "Target " << target << " found at index: " << foundIndex << endl;
    else
        cout << "Target " << target << " not found." << endl;

    return 0;
}
