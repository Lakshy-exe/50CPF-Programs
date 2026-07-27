#include <iostream>
using namespace std;

int main()
{
    int amount;
    int notes500, notes200, notes100, notes50, notes10;

    cout << "Enter amount in rupees: ";
    cin >> amount;

    notes500 = amount / 500;
    amount = amount % 500;

    notes200 = amount / 200;
    amount = amount % 200;

    notes100 = amount / 100;
    amount = amount % 100;

    notes50 = amount / 50;
    amount = amount % 50;

    notes10 = amount / 10;

    cout << "500 rupee notes: " << notes500 << endl;
    cout << "200 rupee notes: " << notes200 << endl;
    cout << "100 rupee notes: " << notes100 << endl;
    cout << "50 rupee notes: " << notes50 << endl;
    cout << "10 rupee notes: " << notes10 << endl;

    return 0;
}