#include<iostream>
using namespace std;
int main()
{
  // What is pointer? --> Is a data type that stores the addresss of a variable
  int a=10;
  int *p=&a;
  // & is a address of operator
  cout<<"Address of a "<<p<<endl; //Will give the address of a
  cout<<"Address of a "<<&a<<endl;
  // * derefrencing operator 
  cout<<"value "<<*p<<endl;

  /****  Pointer to pointer ******/
  int z=100;
  int *x=&z;
  int **c=&x;
  cout<<"Address of z is "<<&z<<endl;
  cout<<"Address of z is "<<x<<endl;
  cout<<"Value of z is "<<*x<<endl;
  cout<<"Address of x is "<<c<<endl;
  cout<<"Address of x is "<<&x<<endl;
  cout<<"Value of x is  "<<*c<<endl;
  cout<<"Value of z in terms of c is "<<**c<<endl;
  return 0;
}