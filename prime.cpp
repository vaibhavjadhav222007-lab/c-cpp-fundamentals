
#include<iostream>
using namespace std ;
int main()
{
  int n,prime=1;

  cout<<"enter num"<<endl;
  cin>>n;

  if(n<=1)
  {
   prime=0;
  }

  for( int i=2;i<=n/2;i++)
  {
    if(n%i==0)
    {
      prime=0;
      break;
    }

  }
  if(prime)
  cout<<"num is prime";
  else
  cout<<"num is not prime";


}