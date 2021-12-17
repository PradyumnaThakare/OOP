#include<iostream>
using namespace std;
int main()
{// new_address=current_address+i*size_of_datatype
  int arr[5]={101,102,103,104,105};
  int *p=arr;
  cout<<"Value of marks arr[0] *p is "<<*p<<endl;
  cout<<"Value of marks arr[1] *(p+1) is "<<*(p+1)<<endl;
  cout<<"Value of marks arr[2] *(p+2) is "<<*(p+2)<<endl;
  cout<<"Value of marks arr[3] *(p+3) is "<<*(p+3)<<endl;
  cout<<"Value of marks arr[4] *(p+4) is "<<*(p+4)<<endl;
  cout<<*(p++)<<endl;
  cout<<*(++p)<<endl;
  return 0;
}