#include<iostream>
#include<iomanip>// used to format the output endl is manipulator 
// to use setw we need to include #include<iomanip>
using namespace std;
int main()
{
  int a=45;
  cout<<a<<endl;
  a=100;
  cout<<a<<endl; // here value of a is changing to keep it constant  we use const 
  /********* constants *********/
  const int b=6969;
  cout<<b<<endl;
  //b=1000;// will show error read only value;
  cout<<b<<endl;
  
  /********* Manipulator ********/
  // setw()
  int z=1000,y=9,x=8;
  cout<<"without setw() z = "<<z<<endl;
  cout<<"without setw() y = "<<y<<endl;
  cout<<"without setw() x = "<<x<<endl;

  cout<<"with setw() z = "<<setw(4)<<z<<endl;//will take width of 4 tabs
  cout<<"with setw() y = "<<setw(4)<<y<<endl;
  cout<<"with setw() x = "<<setw(4)<<x<<endl;

  /***** operator percedence ******/
  // https://en.cppreference.com/w/cpp/language/operator_precedence
  return 0;
}