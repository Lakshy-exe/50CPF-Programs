#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter first integer: ";
    cin >> a;

    cout << "Enter second integer: ";
    cin >> b;

    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "~b = " << (~b) << endl;

    return 0;
}