//This pointer
#include<iostream>
using namespace std;
class A
{
   int a;
   public:
  // A & setData(int a)
  void setData(int a)
   {
     this->a=a;
    // return *this;
   }
   void getData()
   {
     cout<<"Value is : "<<a<<endl;
   }
};
int main()
{
  /*
   this is a key which is a pointer which points to teh object
   whcih invokes the memberfunction
  */
  A a;

  //a.setData(5).getData();
  a.setData(5);
  a.getData();
  return 0;
}