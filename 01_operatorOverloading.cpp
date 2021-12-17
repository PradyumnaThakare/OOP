#include<iostream>
using namespace std;
class complex
{
  int real;
   int img;
   public:
   void setData(int r,int i)
   {
     real=r;
     img=i;
   }
   complex operator+(complex b1)
   {
     complex temp;
     temp.real=real+b1.real;
     temp.img=img+b1.img;
     return temp;
   }
   complex operator-(complex);
   void display()
   {
     cout<<"Sum "<<real<<"i+"<<img;
   }
   
};
/*complex complex ::add(complex b1)
{}*/
complex complex ::operator-(complex b1)
{
   complex temp;
     temp.real=real-b1.real;
     temp.img=img-b1.img;
     return temp;
}
int main()
{
  complex s,a,b,sub;
  a.setData(2,4);
  b.setData(2,4);
  s=a+b;
  s.display();
  sub=a-b;
  sub.display();
  return 0;
}