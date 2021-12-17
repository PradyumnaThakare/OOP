#include<iostream>
using namespace std;
class base
{
   private:// This data mebers are not inheritable
   int data1;
   public:
   int data2;
   void setData();
   inline int getData1();
   int getData2();

};
void base::setData()
{
   data1=10;
   data2=20;
}
inline int base::getData1()
{
  return data1;
}
int base::getData2()
{
  return data2;
}
class derived: public base //Public visiblity mode
{
   int data3;
   public:
   void process();
   void display();
};

void derived:: process()
{
  
   data3=getData1()*getData2();
}
void derived::display()
{
  cout<<"Data 1 "<<getData1()<<endl;
  cout<<"Data 2 "<<getData2()<<endl;
  cout<<"Data 3 "<<data3<<endl;
}
int main()
{
  
  derived d1;
  d1.setData();
  d1.process();
  d1.display();
  return 0;
}