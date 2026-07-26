#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int temp;
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Enter second number:"<<endl;
    cin>>b;

    cout<<"------------------Before swap------------------"<<endl;
    cout<<"First number is "<<a<<endl;
    cout<<"Second number is "<<b<<endl;
    
    temp = a;
    a = b;
    b = temp;

    cout<<"--------------------After Swap--------------------"<<endl;
    cout<<"first number now is "<<a<<endl;
    cout<<"Second number now is "<<b;

    return 0;
}