#include<iostream>
using namespace std;

int squareRootUsingBinarySearch(int num) {
    if (num < 2) return num; 

    int low = 1, high = num, ans = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (mid <= num / mid) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main() {
    int number;
    cout << "Enter Number - ";
    cin >> number;

    if (number < 0) {
        cout << "Negative numbers don't have real square roots." << endl;
        return 1;
    }

    int root = squareRootUsingBinarySearch(number);
    cout << "Root - " << root << endl;

    return 0;
}
