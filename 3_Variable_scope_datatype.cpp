#include<iostream>
using namespace std;
//Local varaible takes precident over global variable
int glo=10;//Global variable
void sum()
{
  int a;//Local variable
  cout<<glo<<endl; // 10 will be printed  
}
int main()
{
  int a=14;
  float b=1.98;
  double d=123.13414;
  bool x=true;
  char c='a';
  cout<<a<<" "<<b<<" "<<d<<" "<<x<<" "<<c<<endl;
  int glo=9;//Local variable
  glo=1900;
  cout<<glo<<endl;// 1900 will be printed
  sum();
}