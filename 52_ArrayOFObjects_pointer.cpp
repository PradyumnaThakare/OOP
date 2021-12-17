/* Array of Objects Using Pointers in C++
https://www.youtube.com/watch?v=OCmCyYxSi2I&list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL&index=52 */
#include<iostream>
using namespace std;
class shop
{
  private:
  int id;
  float price;
  public:
  void setdata(int a,float b)
  {
    id=a;
    price=b;
  }
  void getdata()
  {
    cout<<"Code of the item is "<<id<<endl;
    cout<<"Price of item is   "<<price<<endl;
  }
};
int main()
{
  int size,a,c;
  cout<<"Enter no of item "<<endl;
  cin>>size;
  shop *ptr=new shop[size];
  shop *Tempptr=ptr;
  for(int i=0;i<size;i++)
  {
    cout<<"Enter id and price : "<<endl;
     cin>>a>>c;
     ptr->setdata(a,c);
     ptr++;
  }
  ptr=Tempptr;
  for(int i=0;i<size;i++)
  {
         ptr->getdata();
         ptr++;
  }
  delete []ptr;

  return 0;
}