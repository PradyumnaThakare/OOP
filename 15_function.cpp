#include<iostream>
using namespace std;
/*
   Function Prototype
   return_datatype funct_name (arguments)
   {
     function body
   }
   int sum(int a,int b)  -->Acceptable
   int sum(int ,int)     -->Acceptable
   int sum(int a,b)      ---> not Acceptable    
*/

void diff (int a,int b)//formal
{
  cout<<a-b;
}
int sum(int a,int b)// formal parameters scope is only in this func
{
  int c;
  c=a+b;
  return c;
}
int main()
{
   int a,b;
   cout<<"Enter two numbers "<<endl;
   cin>>a>>b;
   int c=sum(a,b);// a and b are actuall parameter
   cout<<c;
   diff(a,b);
   return 0;
}
