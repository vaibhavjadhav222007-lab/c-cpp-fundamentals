#include<iostream>
using namespace std;
class Calculator
   {
                public:
                    int a,b;

                    void accept()
                    {
                        cout<<"Enter numbers"<<endl;
                        cin>>a>>b;
                    
                    }
                          
                    void Add()
                    {
                        cout<<"\nAddition="<<a+b<<endl;

                    }  
                    
                    void Sub()
                    {
                        cout<<"\nSubtraction="<<a-b<<endl;

                    }
                     
                   void Mult()
                   {
                      cout<<"\nMultiplication="<<a*b<<endl;
                    }
                   

                   void Div()
                   {
                     if(b!=0)
                        cout<<"\nDevision="<<a/b<<endl;
                      else
                       cout<<"divison by zero is not allowed"<<endl;
                    }
                   

    };

int main()
{
    Calculator c;
    int choice;

    c.accept();

    do
    {
        cout<<"1.Addition"<<endl;
        cout<<"2.subtraction"<<endl;
        cout<<"3.Multiplication"<<endl;
        cout<<"4.Division"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter choice"<<endl;

        cin>>choice;

        switch(choice)
        {
            case 1:
                   c.Add();
                   break;

            case 2:
                   c.Sub();
                   break;
            case 3:
                   c.Mult();
                   break;  
            case 4:
                   c.Div();
                   break;
            case 5:
                   cout<<"Exit";
                   break;
            
            default:
                    cout<<"Invalid choice"<<endl;
                   
        }
    }while(choice!=5);
      return 0;
}    