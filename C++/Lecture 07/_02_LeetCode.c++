#include <iostream>
using namespace std;

// Complement Base 10 integer

//         11111111111111111111111111110101   (~n)
//   AND   00000000000000000000000000001111   (mask)
//   --------------------------------------
//         00000000000000000000000000000101   → Decimal: 5

int bitwiseComplement(int n) {
    if (n == 0) return 1;

    int mask = 0;
    int temp = n;

    while (temp != 0) {
        mask = (mask << 1) | 1;
        temp = temp >> 1;
    }

    return (~n) & mask;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int result = bitwiseComplement(n);
    cout << "Complement: " << result << endl;

    return 0;
}



