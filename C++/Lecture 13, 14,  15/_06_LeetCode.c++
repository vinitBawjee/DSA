#include<iostream>
#include<iomanip> // for setprecision
using namespace std;

double squareRootUsingBinarySearch(int num) {
    if (num < 2) return num;

    int low = 1, high = num;
    int intPart = 0;

    // Step 1: Find the integer part
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (mid <= num / mid) {
            intPart = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Step 2: Find the decimal part
    double root = intPart;
    double increment = 0.1;

    for (int i = 0; i < 3; ++i) {
        while ((root + increment) * (root + increment) <= num) {
            root += increment;
        }
        increment /= 10;
    }

    return root;
}

int main() {
    int number;
    cout << "Enter Number - ";
    cin >> number;

    if (number < 0) {
        cout << "Negative numbers don't have real square roots." << endl;
        return 1;
    }

    double root = squareRootUsingBinarySearch(number);
    cout << "Root: " << fixed << setprecision(3) << root << endl;

    return 0;
}
