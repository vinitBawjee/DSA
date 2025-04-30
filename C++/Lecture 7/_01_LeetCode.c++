#include <iostream>
#include <climits>
using namespace std;

// Reverse Integer

int reverse(int x) {
    int ans = 0;

    while (x != 0) {
        int digit = x % 10;
        if (ans > INT_MAX / 10 || ans < INT_MIN / 10) {
            return 0;
        }

        ans = (ans * 10) + digit;
        x = x / 10;
    }

    return ans;
}

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    int result = reverse(x);
    cout << "Reversed integer: " << result << endl;

    return 0;
}
