#include<iostream>
using namespace std;
class complex
{
  private:
  int real;
  int img;
  public:
  
  void getData()
  {
     cout<<" Real part "<<real<<endl;
     cout<<" Img part "<<img<<endl;
  } 
  void setData(int a,int b)
  {
    real=a;
    img=b;
  }
};
int main()
{
  complex c1;
  c1.setData(2,4);
  c1.getData();

//Heap memory
  complex *ptr=&c1;
   (*ptr).setData(69,69);
   (*ptr).getData();

//Dynamic memory
   complex *ptr2=new complex;
   //(*ptr2).setData(100,100); this is exactly same as
    ptr2->setData(100,100);
   //(*ptr2).getData();
   ptr2->getData();
   delete ptr2;

   //Array of objects
   complex *ptr3=new complex[2];
  ptr3->setData(690,690);
  ptr3->getData();
  delete []ptr3;
  return 0;
}