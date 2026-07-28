#include <iostream>
using namespace std;

int main() {
    int a = 13, b = 5, c = 2, d = 19, e = 4, f = 7;

    // Operator precedence in C++:
    // 1. Multiplication: b * c
    // 2. Division and modulus: d / e then (d / e) % f
    // 3. Addition and subtraction: a + ... - ...
    int mul = b * c;
    int div = d / e;
    int mod = div % f;
    int manual = a + mul - mod;

    int direct = a + b * c - d / e % f;

    cout << "Manual calculation:" << endl;
    cout << "b * c = " << mul << endl;
    cout << "d / e = " << div << endl;
    cout << "(d / e) % f = " << mod << endl;
    cout << "a + (b * c) - ((d / e) % f) = " << manual << endl;

    cout << "Direct expression result: " << direct << endl;

    return 0;
}