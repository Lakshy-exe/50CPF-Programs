#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    if (op == '+') {
        cout << "Result: " << a + b << endl;
    } else if (op == '-') {
        cout << "Result: " << a - b << endl;
    } else if (op == '*') {
        cout << "Result: " << a * b << endl;
    } else if (op == '/') {
        if (b != 0) {
            cout << "Result: " << a / b << endl;
        } else {
            cout << "Cannot divide by zero" << endl;
        }
    } else {
        cout << "Invalid operator" << endl;
    }

    return 0;
}