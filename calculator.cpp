#include<iostream>
using namespace std;
int main()
{
  double a,b;
  char optr;
  cout<<"Mention the operator";
  cin>>optr;
  cout<<"Enter two numbers";
  cin>>a>>b;
  switch(optr)
{
  case'+':
	  cout<<"Result:"<<a+b;
    break;
  case'-':
    cout<<"Result:"<<a-b;
    break;
  case'*':
    cout<<"Result:"<<a*b;
    break;
  case'%':
    cout<<"Result:"<<a%b;
    break;
  case'/':
    if(b!=0)
      cout<<"Result:"<<a/b;
    else
      cout<<"Error : Division by Zero!";
    break;
  default:
    cout<<"Invalid operator!";
}
return 0;
}
