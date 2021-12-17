/********** Copy constructor  **********/
#include<iostream>
using namespace std;

class number
{
  private:
  int num;
  int num1;
  public:
   number() //default constructor
   {
     num=0;
   }
   number(int a)//paramertized constructor
   {
     num=a;
   }

// ******** When there is no copy constuctor found copy compiler provides/creates its own copy constructor ***********

   number(number &obj)//copy constuctor
   {
     cout<<"Copy constructor called "<<endl;
       num=obj.num;
       
   }
    number(number &obj,number &obj2)//copy constuctor
   {
     cout<<"Copy constructor called "<<endl;
       num=obj.num;
       num1=obj2.num1;
   }
   void display();
};

void number::display()
{
  cout<<"The number is : "<<num<<endl;
}

int main()
{
  number x,y,z(45),z3;
  y=number(69);
  x.display();
  y.display();
  z.display();//Passing object x to z so z would be same as x;

  number z1(z);//copy constructor invoked
  z1.display(); 

  z3=z;//copy constructor is not called (we are assigning the value of z directly to z3)
  z3.display();
 
  number z4=z;//Her copy constructor will be called;
  z4.display();
  
  number z2(z,z);
  z2.display();
  return 0;
}