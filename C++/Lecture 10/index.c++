#include <iostream>
using namespace std;

// Function to find the unique element

int findUnique(int arr[], int size) {
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans ^= arr[i];  
    }
    return ans;
}

int main() {
    int arr[] = {1, 3, 2, 2, 1}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    int unique = findUnique(arr, size);
    cout << "The unique element is: " << unique << endl;

    return 0;
}
