#include<iostream>
using namespace std;
/*
     ****** call by address *******
    here we are passind the address of a and b as actual para
    add are received in pointer p1 and p2
    p1 and p2 are linked with actual variables therefore changes in p1 and p2 will be refected in 
    a and b;
*/
void swap(int *p1,int *p2)
{
  int temp=*p1;
  *p1=*p2;
  *p2=temp;
}
int main()
{
  int a=5,b=10;
  swap(&a,&b);
  cout<<"a = "<<a<<" b = "<<b<<endl;
}