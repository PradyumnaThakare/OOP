#include<iostream>
using namespace std;
/*
     ****** call by reference *******
   here now p1 and p2 will point to a and b
   p1 and p2 are reference variables
*/
void swap(int &p1,int &p2)
{
  int temp=p1;
  p1=p2;
  p2=temp;
}
int main()
{
  int a=5,b=10;
  swap(a,b);
  cout<<"a = "<<a<<" b = "<<b<<endl;
}