#include <iostream>
using namespace std;

int main()
{
    int number, digit1, digit2, digit3, sum;

    cout << "Enter a 3-digit number: ";
    cin >> number;

    digit1 = number % 10;         // last digit
    digit2 = (number / 10) % 10;  // middle digit
    digit3 = number / 100;       // first digit

    sum = digit1 + digit2 + digit3;

    cout << "Sum of digits: " << sum << endl;

    return 0;
}