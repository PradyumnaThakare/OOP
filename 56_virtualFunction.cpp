#include<iostream>
using namespace std;
 /*
  *********************************IMP*************************************
  case 1:
  1>If pointer is of type base class and it is pointing to base class object
  It will access all the members of base class and it memeber function
  Case 2:
  1> If pointer is of type base class and it is pointing to derived class object then
  2>if u try to access display() it will excute the display()
  of base class and not of derived class
  3>it can only access the members of base class and not of derived class


  Now to change the default behavior of Case2 we use virtual function
  that is if the pointer is of base type and is pointing to the object of derived class then it should 
  access all the members of derived class this is done by making the display() function of derived class
  virtual

  This is Called as run time polymorphism
  */
class base{
  protected:
  
  public:
  int val1=10;
  virtual void display()
  {
    
    cout<<"Displaying base class Vale 1 : "<<val1<<endl;
  }
};
class derived:public base{
   
  public:
  int val2;
  void display()
  {
        cout<<"Displaying base class Vale 1 : "<<val1<<endl;
        cout<<"Displaying derived class Vale 2 : "<<val2<<endl;

  }
};
int main()
{

  base *ptr_base;
  base obj_base;
  derived  obj_derived;

  ptr_base=&obj_derived;
  ptr_base->display();

  ptr_base=&obj_base;
  ptr_base->display();
  return 0;
}