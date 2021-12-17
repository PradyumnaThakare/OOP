/******* Friend class ********/
#include<iostream>
using namespace std;
class complex
{
   private :
   int real;
   int img;
   public:
   void setData(int ,int);
   void display();


   friend complex sum(complex n1,complex n2);/* sum function has got the permision to access the private data 
   by using friend function */
};

complex sum(complex n1,complex n2)/*this is an independent function and as it is outside the class and data members are
 private  therefore to access them it needs purmision from the class to access the private stuff
 therefore we use friend keyword to do so */
{
    complex sm;
    sm.setData((n1.real+n2.real),(n2.img+n2.img));
    return sm;
}

void complex::setData(int a,int b)
{
  real=a;
  img=b;
}

void complex::display()
{
  cout<<"Complex no : "<<real<<"+i"<<img<<endl;
}

int main()
{
  complex a,b,c;
  a.setData(2,4);
  a.display();
  b.setData(1,2);
  b.display();
  c=sum(a,b);
  c.display();
  
  return 0;
}
/*
  Properties of friend funtion 
  1->Not in the scope of class its an independ function 
  2->Since its not in the scope of the class u cant do c.sum() as its not the
     memeber function of the class
  3-> Can be invoked with creating the object
  4 -> Usually used when function as objects as arguments 
  5-> Can be declared inside private or publics
  6->It cannot access members directly by there names they require objectname.membername to access 
*/