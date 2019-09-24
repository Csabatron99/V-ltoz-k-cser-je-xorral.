#include <iostream>
using namespace std;

int main() 
{
  int a=0,b=0;
  cout<<"Please enter two variable: \n";
  cin>>a>>b;
  cout<<"\n1. Variable= "<<a<<"\n2. Variable= "<<b<<"\n";
  a=a*b;
  b=a/b;
  a=a/b;
  cout<<"\nAfter the swap: ";
  cout<<"\n1. Variable= "<<a<<"\n2. Variable= "<<b<<"\n";
  return 0;
}
