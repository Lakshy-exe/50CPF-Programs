#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;

    cout<<"Enter number 1: ";
    cin>>a;
    cout<<"Enter number 2: ";
    cin>>b;

    cout<<"Pre-Swap, a ="<<a<<" & b ="<<b<<endl;

    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"Post-Swap, a ="<<a<<" & b ="<<b<<endl;
    return 0;
}