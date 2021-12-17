/*********  Constructor With default arguments  ************/

#include<iostream>
using namespace std;
class simple
{
   private :
   int data1;
   int data2;
   int data3;
   public :
   simple(int a,int b=69,int c=12)
   {
     data1=a;
     data2=b;
     data3=c;
   }
   void display();
};
void simple::display()
{
  cout<<" values are "<<data1<<" "<<data2<<endl;
}
int main()
{
  simple s1(3,4);
  s1.display();
  simple s2(2);
  s2.display();
  
  return 0;
}