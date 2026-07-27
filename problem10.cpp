#include <iostream>
using namespace std;

int main()
{
    short int num = 400000; // Overflow occurs because short int usually stores values only from -32768 to 32767

    cout << "Value stored in short int: " << num << endl;

    return 0;
}   