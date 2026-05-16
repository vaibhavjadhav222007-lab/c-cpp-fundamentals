#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{
    vector<int>vec;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(40);
    vec.push_back(50);
    vec.pop_back();
    cout<<"after push back:"<<vec.size()<<endl;
    for(int value: vec)
    {
        cout<<value<<endl;

    }
    return 0;
    
}
