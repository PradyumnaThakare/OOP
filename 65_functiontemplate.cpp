/* Function template */
#include<iostream>
using namespace std;

/*float funcavg(int a,int b)
{
  float c;
  c=(a+b)/2.0;
  return c;
}
float funcavg(int a,float b)
{
  float c;
  c=(a+b)/2.0;
  return c;
}*/

//template<class t1,class t2>
template<class t1,class t2>
float funcavg(t1 a,t2 b)
{
  float c;
  c=(a+b)/2.0;
  return c;
}
template<class t>
void swappp(t &a,t &b)
{
   t temp=a;
   a=b;
   b=temp;
}
int main()
{
  float a= funcavg(4,5);
  cout<<a<<endl;
  int c=4,x=10;
  swappp(c,x);
  cout<<c<<" "<<x<<endl;
  return 0;
}