#include<iostream>
#include<cstring>
using namespace std;
int add(int a,int b)
{
  return a+b;
}
int add(int a,int b,int c )
{
  return a+b+c;
}
string add(char a[],char b[])
{
   string c=strcat(a,b);
   return c;
}
int main()
{
  cout<<"Enter a,b,c ";
  int a,b,c;
  cin>>a>>b>>c;
  cout<<add(a,b)<<endl;
  cout<<add(a,b,c)<<endl;
  char z[]="hello";
  char x[]="world";
   cout<<add(z,x);
  return 0;
}