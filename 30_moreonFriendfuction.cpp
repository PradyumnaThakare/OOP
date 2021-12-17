#include<iostream>
using namespace std;

class Y;//formal declaration

class X
{
   private:
   int data;
  
   public:
   void setData(int value)
   {
      value=data;
   }
  friend void add(X,Y);
};
class Y
{
  private :
  int num;
 friend class X;
  public:
  void setData(int value)
   {
      value=num;
   }
  friend void add(X,Y);
};
void add( X n1,Y n2)
{
  cout<<" adding the data of X and Y "<<n1.data+n2.num;
}
int main()
{
  X a1;
  a1.setData(3);
  Y a2;
 a2.setData(4);
 add(a1,a2);
  return 0;
}