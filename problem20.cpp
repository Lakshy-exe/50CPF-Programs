#include <iostream>
using namespace std;

int main()
{
    int distance, time, speed;

    cout << "Enter distance: ";
    cin >> distance;

    cout << "Enter time: ";
    cin >> time;

    speed = distance / time;

    cout << "Speed = " << speed << endl;

    return 0;
}