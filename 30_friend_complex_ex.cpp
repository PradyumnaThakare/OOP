#include<iostream>
using namespace std;
class c2;// forward declare
class c1
{
  private :
  int data;
  public:
  void getData(int);
  void display();
  friend void swap(c1&no1,c2&no2);
};
void c1::getData(int a)
{
  data=a;
}
void c1::display()
{
  cout<<" Value = "<<data<<endl;
}
class c2
{
  private :
  int data2;
  public:
  void getData(int );
  void display();
  friend void swap(c1&no1,c2&no2);
};
void c2::getData(int a)
{
  data2=a;
}
void c2::display()
{
  cout<<" Value = "<<data2<<endl;
}

void swap(c1 &no1,c2 &no2)
{
  int temp=no1.data;
  no1.data=no2.data2;
   no2.data2=temp;
}
int main()
{
  c1 a;
  a.getData(4);
  c2 b;
  b.getData(5);
  swap(a,b);
  cout<<"Swapped ";
  a.display();
  cout<<" and ";
  b.display();
  return 0;
}