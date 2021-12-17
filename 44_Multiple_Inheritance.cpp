// Multiple Inheritance 
#include<iostream>
using namespace std;
/*
 *********Syntax for inherting in Multiple inheritance*******

 class derived_class : visiblity_mode base1, visiblity_mode base2
 {
   class body
 };

*/
//base1
class  base1
{
    protected:
    int data1;
    public:
    void setbase(int n);
  
};
void base1::setbase(int n)
{
  data1=n;
}
//base 2
class  base2
{
    protected:
    int data2;
    public:
    void setbase2(int n);
  
};
//base 3
class  base3
{
    protected:
    int data3;
    public:
    void setbase3(int n);
  
};
void base3::setbase3(int n)
{
  data3=n;
}

// derived
/*
   How will derived class look like after inherting base1 and base1

   Data member :
   int data1 --->Proctected
   int data2 --->Proctected
   int data3 --->Proctected

   Memeber  Function:
   void setbase(int n);-->public
   void setbase3(int n);-->public
   void setbase2(int n);-->public
   void show();-->public
   
*/
class derived:public base1,public base2,public base3
{
   public:
   void show()
   {
     cout<<" Data1 : "<<data1<<endl;
     cout<<" Data2 : "<<data2<<endl;
     cout<<" Data3 : "<<data3<<endl;
     cout<<" Sum : "<<data1+data2+data3<<endl;
   }
};
int main()
{
  derived d1;
  d1.setbase(100);
  d1.setbase2(69);
  d1.setbase3(100);
  d1.show();
  return 0;
}