#include<iostream>
using namespace std;
int main()
{
  int n;
  int arr[5];
  cout<<"Enter the number : ";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int j=0;j<n;j++)
  {
    cout<<arr[j]<<" ";
  }
  int i=0;
  do{
    cout<<arr[i]<<" ";
    i++;
  }while(i<n);
  return 0;
}