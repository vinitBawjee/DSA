#include <iostream>
using namespace std;

int findFirst(int arr[], int size, int target) {

    int low = 0, high = size - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            high = mid - 1; // search left half
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;

}

int findLast(int arr[], int size, int target) {

    int low = 0, high = size - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            low = mid + 1; // search right half
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;

}

int main() {

    int arr[] = {0, 5, 5, 6, 6, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    int first = findFirst(arr, size, target);
    int last = findLast(arr, size, target);

    cout << first << " " << last << endl;
    
    return 0;

}
