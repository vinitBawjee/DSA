#include <iostream>
using namespace std;

// Find Duplicates

int findDuplicate(int arr[], int n) {
    // Step 1: Calculate sum of all elements in array
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Step 2: Calculate expected sum from 1 to n-1
    int expectedSum = (n - 1) * n / 2; 

    // Step 3: Duplicate = sum - expectedSum
    return sum - expectedSum;
}

int main() {
    int arr[] = {6, 3, 1, 5, 4, 3, 2}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int duplicate = findDuplicate(arr, n);

    cout << "Duplicate element is: " << duplicate << endl;

    return 0;
}
