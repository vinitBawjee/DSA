#include<iostream>
using namespace std;

int main() {

    int a = 4, b = 6;
    cout<< "a & b = " << (a & b) <<endl;
    cout<< "a | b = " << (a | b) <<endl;
    cout<< "~a = " << (~a) <<endl;
    cout<< "a ^ b = " << (a ^ b) <<endl;
    cout<< "a << b = " << (a << b) <<endl;
    cout<< "a >> b = " << (a >> b) <<endl;

    cout<< "++a = " << (++a) <<endl;
    cout<< "a++ = " << (a++) <<endl;
    cout<< "--a = " << (--a) <<endl;
    cout<< "a-- = " << (a--) <<endl;

    return 0;
}

// x << n  ≡  x * (2^n)
// x >> n  ≡  x / (2^n) 