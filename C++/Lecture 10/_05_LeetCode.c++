#include <iostream>
using namespace std;

void pairSum(int arr[], int n, int s) {
    bool found = false;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == s) {
                int first = arr[i];
                int second = arr[j];

                // Ensure pair is in sorted form: smaller number first
                if(first > second) {
                    int temp = first;
                    first = second;
                    second = temp;
                }

                cout << first << " " << second << endl;
                found = true;
            }
        }
    }

    if(!found) {
        cout << "-1\n";
    }
}

int main() {
    int arr[] = {1, 3, 2, 2, 4, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = 4;

    pairSum(arr, n, s);
    return 0;
}
