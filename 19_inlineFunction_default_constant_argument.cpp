#include<iostream>
#include<cmath>
using namespace std;
/**************  inline function  *************/
inline int power(int a,int b)
{
  // we dont use inline function for static varaibles and recursion 
  return pow(a,b);
}
/**************  default argument  *************/
// write the default arugments at the last ,
int moneybank(int money,float intrest=1.45)
{
  return  money*intrest;
}
int main()
{
  int a,b;
  cout<<"Enter the no a and b "<<endl;
  cin>>a>>b;
  cout<<power(a,b)<<endl;

  int money=100000;
  cout<<"Money recived by common person = "<<moneybank(money)<<endl;
  cout<<"Money recived by common person = "<<moneybank(money,2.34)<<endl;
  return 0;
}