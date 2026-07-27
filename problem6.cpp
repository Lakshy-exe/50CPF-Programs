#include <iostream>
using namespace std;
int main()
{
    float length, bredth, perimeter, area;
    cout<<"Enter length::";
    cin>>length;
    cout<<"Enter bredth";
    cin>>bredth;
    perimeter = 2*(length + bredth);
    area = length * bredth;
    cout<<"Perimeter is::"<<perimeter<<"meter";
    cout<<"\nArea is::"<<area<<"meter sq.";
    return 0;

}