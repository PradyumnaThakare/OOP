#include<iostream>
using namespace std;
/*
   ****** Call by value ******
  here there will be no change made in the actual parameter
  because they are not linked with formal para as formal para are seperate 
*/
void swap(int a,int b)//fromal para
{
  int temp=a;
  a=b;
  b=temp;
  cout<<"value in swap fucntion "<<" a = "<<a<<" b= "<<b<<endl;
}
int main()
{
  int a=5,b=10;
   swap(a,b);//acutal para
   cout<<"a = "<<a<<" b = "<<b<<endl;
  return 0;
}