#include<iostream>
using namespace std;
class complex
{
  private:
  int real;
  int img;
  public:
 complex()//default constructor ->takes no parameter
 {
   real=0;
   img=0;
 }
 complex(int a,int b)//parameterized constructor ->takes value from the user
 {
   real=a;
   img=b;
 }
 void display();
};

/* { initazilation out side class }
  complex::complex()
  {
    real=0;
    img=0;
  }
*/
/*
 { initazilation out side class }
 complex::complex(int a,int b)
 {
   real=a;
   img=b;
 }
*/
void complex::display()
{
  cout<<"Complex : "<<real<<"i+"<<img<<endl;
}
int main()
{
  //implicit call
  complex a(4,6);
  a.display();
  // explicit call
  complex b=complex(10,5);
  b.display();
  return 0;
}