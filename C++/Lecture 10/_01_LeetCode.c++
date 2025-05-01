#include <stdio.h>

// Find Unique Element

int findUnique(int arr[], int size) {
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans = ans ^ arr[i];  
    }
    return ans;
}

int main() {
    int arr[] = {1, 2, 3, 2, 1}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    int unique = findUnique(arr, size);
    printf("The unique element is: %d\n", unique);

    return 0;
}
