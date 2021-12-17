#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the no : ";
  cin>>n;
  int i=1;
  do
  {
    cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    i++;
  }while(i<=20);

  for(int i=1;i<=20;i++)
  {
    cout<<n<<" x "<<i<<" = "<<n*i<<endl;
  }
  int j=1;
  while(j<=20)
  {
     cout<<n<<" x "<<j<<" = "<<n*j<<endl;
     j++;
  }
  return 0;
}