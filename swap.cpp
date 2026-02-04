#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;

    cout<<"Enter a and b:"<<endl;
    cin>>a>>b;

    temp=a;
    a=b;
    b=temp;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}