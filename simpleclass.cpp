#include<iostream>
using namespace std;

class Student
{
    int roll;
    string name;

public:
    void accept()
    {
        cout << "Enter roll and name: ";
        cin >> roll >> name;
    }

    void display()
    {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s;   // object creation
    s.accept();  // calling function
    s.display();

    return 0;
}