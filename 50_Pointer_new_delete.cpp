// _Pointer_new_delete
#include<iostream>
using namespace std;
int main()
{
  // Basics pointers
  int a=10;
  int *p=&a;
  cout<<"Address of a (p) "<<p<<endl;
  cout<<"Address of a (&a) "<<&a<<endl;
  cout<<"Value of a  "<<a<<endl;
  cout<<"Value of a (*p)  "<<*p<<endl;

  //new operator (creates memory in dynamic(heap) memory)
  int *p1=new int(40);//40 is the value that is store in the heap memeory
  float *p2=new float(3.45);
  cout<<"Value stored in the heap memory is "<<*p1<<endl;
   cout<<"Value stored in the heap memory is "<<*p2<<endl;

  //delete operator
  delete p1;

  //Creating a block of memory in heap using arr
  int *arr=new int[3];
  for(int i=0;i<3;i++)
  {
    cin>>arr[i];
  }
  // *(arr+1)=100;
  for(int i=0;i<3;i++)
  {
     cout<<"Value of arr["<<i<<"] in heap memory is "<<arr[i]<<endl;
  }

  delete []arr;

  return 0;
}