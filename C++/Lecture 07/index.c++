#include<iostream>
using namespace std;

int isPowerOfTwo(int n) {
    if(n <= 0) {
        return false;
    }
    while(n % 2 == 0) {
        n = n / 2;
    }

    return n == 1;
}

int main() {
    int num;
    cin >> num;

    if (isPowerOfTwo(num)) {
        cout << num << " is a power of two." << endl;
    } else {
        cout << num << " is not a power of two." << endl;
    }

    return 0;
}