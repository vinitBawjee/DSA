#include <iostream>
using namespace std;

// Array Intersection

void findArrayIntersection(int arr1[], int n, int arr2[], int m) {
    int i = 0, j = 0;
    bool found = false;

    while(i < n && j < m) {
        if(arr1[i] == arr2[j]) {
            cout << arr1[i] << endl;
            i++;
            j++;
            found = true;
        }
        else if(arr1[i] < arr2[j]) {
            i++;
        }
        else {
            j++;
        }
    }

    if(!found) {
        cout << -1;
    }

}

int main() {
    int arr1[] = {1, 2, 3, 4, 6};
    int arr2[] = {2, 4, 6, 8};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    findArrayIntersection(arr1, n, arr2, m);
    return 0;
}
