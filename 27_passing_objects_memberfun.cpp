/************ Passing objects in member fun ****************/
#include<iostream>
using namespace std;
class complex
{
   private:
   int real;
   int img;
   public:
   void setdata(int,int);
   void sum_of_complexNO(complex n1,complex n2);//complex no is a datatype  that hs two values real and img
   void printSum();
};
void complex::setdata(int a,int b)
{
   real=a;
   img=b;
}
void complex::sum_of_complexNO(complex n1,complex n2)
{
   real=n1.real+n2.real;
   img=n1.img+n2.img;
}
void complex::printSum()
{
  cout<<"Complex no : "<<real<<"+i"<<img<<endl;
}
int main()
{
  complex c,a,b;
  a.setdata(2,3);
  a.printSum();
  b.setdata(4,5);
  b.printSum();
  c.sum_of_complexNO(a,b);
  c.printSum();
  return 0;
}