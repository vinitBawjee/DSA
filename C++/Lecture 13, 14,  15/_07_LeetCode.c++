#include <iostream>
#include <climits>
using namespace std;

bool isPossible(int arr[], int n, int m, int maxPages) {
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > maxPages) return false; // Book itself is too big

        if (pageSum + arr[i] <= maxPages) {
            pageSum += arr[i];
        } else {
            studentCount++;
            if (studentCount > m) return false;
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m) {
    if (m > n) return -1; // Not enough books

    int low = 0, high = 0, result = -1;

    // Calculate total pages
    for (int i = 0; i < n; i++) {
        high += arr[i];
        if (arr[i] > low) low = arr[i]; // max single book
    }

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isPossible(arr, n, m, mid)) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 2;

    int result = allocateBooks(arr, n, m);
    if (result == -1)
        cout << "Not possible to allocate books." << endl;
    else
        cout << "Minimum of maximum pages: " << result << endl;

    return 0;
}
