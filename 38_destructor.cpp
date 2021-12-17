/********* Destructor **********/
// It does not take any value/parameter or written any value
#include<iostream>
using namespace std;
class num
{
  private:
  static int count;
  public :
  num()
  {
    count++;
    cout<<" Constuctor is called for object number "<<count<<endl;

  }
  ~num()
  {
    cout<<"Destrucot is called for onject number "<<count<<endl;
    --count;
  }

};
int num::count=0;
int main()
{
  cout<<"We are inside main function "<<endl;
  cout<<"making first object n1 "<<endl;
  num n1;
  {
    cout<<" We are inside a block "<<endl;
    cout<<"Creating two more objects n2 and n3 "<<endl;
   num n2 ,n3;
    cout<<"exiting block"<<endl;
  }
  cout<<" Back to main"<<endl;
  return 0;
}