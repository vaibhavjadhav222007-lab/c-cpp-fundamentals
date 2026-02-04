#include<iostream>
using namespace std;
class Student 
{ 
    public:
            int roll_no;
            int mark;
            
                void accept()
                {
                  cout<<"Enter roll no:";
                  cin>>roll_no;
                  cout<<"enter marks:";
                  cin>>mark;
                }
                
               void display()
                {
                    cout<<"Roll no="<<roll_no<<endl;
                    cout<<"mark="<<mark<<endl;
                }

            
            
};          
int main()
{
        Student s;
        s.accept();
        s.display();

}


            
           
