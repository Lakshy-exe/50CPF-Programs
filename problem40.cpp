#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 7;

    cout << "Size of (a+b): " << sizeof(a + b) << " bytes" << endl;
    cout << "Size of 3.14: " << sizeof(3.14) << " bytes" << endl;
    cout << "Size of 'A': " << sizeof('A') << " bytes" << endl;

    return 0;
}
