#include <iostream>
using namespace std;

int main()
{
    char name[100];
    int rollNumber;
    float marks;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter roll number: ";
    cin >> rollNumber;

    cout << "Enter marks: ";
    cin >> marks;

    cout << "Student Name: " << name << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Marks: " << marks << endl;

    return 0;
}