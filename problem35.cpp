#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int larger = (a > b) ? a : b;

    cout << "Larger number is: " << larger << endl;

    return 0;
}
