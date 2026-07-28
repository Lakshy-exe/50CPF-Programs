#include <iostream>
using namespace std;

int main()
{
    int number, digit1, digit2, digit3, reverse;

    cout << "Enter a 3-digit number: ";
    cin >> number;

    digit1 = number % 10;         // last digit
    digit2 = (number / 10) % 10;  // middle digit
    digit3 = number / 100;       // first digit
    reverse = (digit1*100) + (digit2*10) + (digit3);

    cout << "Reverse number is: " << reverse << endl;

    return 0;
}