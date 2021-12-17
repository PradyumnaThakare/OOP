#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main()
{
  /*Function Object/Functor : Function wrapped in a class so that it is availabe like 
                   an object
                   https://en.cppreference.com/w/cpp/utility/functional
  */
   int arr[]={1,4,3,54,100,77};
   sort(arr,arr+5);
   sort(arr,arr+6,greater<int>());
   for(int i=0;i<6;i++)
   {
     cout<<arr[i]<<endl;
   }
  return 0;
}