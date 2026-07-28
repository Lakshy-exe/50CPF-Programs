#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double principal, rate, time, amount;

    cout << "Enter principal: ";
    cin >> principal;

    cout << "Enter rate: ";
    cin >> rate;

    cout << "Enter time: ";
    cin >> time;

    amount = principal * pow((1 + rate / 100), time);

    cout << "Compound Interest Amount: " << amount << endl;

    return 0;
}
