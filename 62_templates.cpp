/* Templates 
https://www.youtube.com/watch?v=kKJeekDKU30&list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL&index=63

if u didnt used template then u have to a make classes for each datatyple like for float a separate class and so on
here u are basically passing the data type in it
*/

#include<iostream>
using namespace std;
template <class T>
class vector
{
  public:
  int size;
  T *arr;
  vector(int s)
  {
     size=s;
     arr=new T[size];
  }
  T dotproduct(vector &v)
  {
     T d=0;
     for(int i=0;i<size;i++)
     {
       d+=this->arr[i]*v.arr[i];
     }
     return d;
  }
};
int main()
{
  vector<int> v1(3);
  v1.arr[0]=1;
  v1.arr[1]=10;
  v1.arr[3]=100;
  vector<int> v2(3);
  v2.arr[0]=1;
  v2.arr[1]=0;
  v2.arr[3]=1;
  int a=v1.dotproduct(v2);
  cout<<a<<endl;
  vector<float> v3(3);
  v3.arr[0]=1.1;
  v3.arr[1]=10.3;
  v3.arr[3]=100.4;
  vector<float> v4(3);
  v4.arr[0]=1.89;
  v4.arr[1]=0.89;
  v4.arr[3]=1.89;
  float b=v3.dotproduct(v4);
  cout<<b<<endl;

  return 0;
}