//Initialization list in Constructors 
#include<iostream>
using namespace std;
/*
Syntax for initialization list

constuctor (argument list) : Initialization_Section
{
    assignment+code
}

class Test
{
  private:
  int a;
  int b;
  public:
  Test(int i,int j) : a(i),b(j)
  {
    cout<<"Constructor executed "<<endl;
  }
};
*/
class Test
{
  private:
  int a;
  int b;
  
  public:
   //Test(int i,int j):a(i),b(j)
   //Test(int i,int j):a(i),b(i+j)
   //Test(int i,int j):a(i),b(2*j)
   //Test(int i,int j):a(i),b(a+j)
   //Test(int i,int j):b(j),a(b+i)// -->Red flag because a would be initlaized first because a is written first
   Test(int i,int j):a(i)
  {
    b=j;
    cout<<"Constructor executed "<<endl;
    cout<<" Value of a is  "<<a<<endl;
    cout<<" Value of b is  "<<b<<endl;


  }
};
int main()
{
  Test t1(5,6);

  return 0;
}