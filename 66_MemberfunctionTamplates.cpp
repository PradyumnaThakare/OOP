//Member Function Templates & Overloading Template Functions
#include<iostream>
using namespace std;
template<class t1>
class prad
{
  t1 data1;
  public:
  prad(t1 a)
  {
    data1=a;
  }
  void display();
};
template <class t>
void prad<t>::display()
  {
    cout<<" data1 "<<data1<<endl;
  }

void func(int a)
{
  cout<<"I am first func "<<a<<endl;
}
template <class t>
void func(t a)
{
  cout<<"I am templatized func "<<a<<endl;
}

template <class t>
void func1(t a)
{
  cout<<"I am templatized func "<<a<<endl;
}
int main()
{
  /*prad<int>p(5);
  p.display();
  prad<char>p('a');
  p.display();*/

  //func(4);//Exact match takes the highest piority 
  func1(4);
  return 0;
}