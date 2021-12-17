/*https://www.youtube.com/watch?v=0YQ_yhX46uk&list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL&index=55*/
#include<iostream>
using namespace std;
class base{
  protected:
  
  public:
  int val1;
  void display()
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

  */
  base *ptr_base_class;
  base obj_base_class;
  derived obj_derived_class;
  ptr_base_class= &obj_derived_class;
  ptr_base_class->val1=34;
  //ptr_base_class->val2=190; will show error
  ptr_base_class->display();

 derived *ptr_derived;
 ptr_derived=&obj_derived_class;
 ptr_derived->val2=100;
 ptr_derived->val1=600;
 ptr_derived->display();
  return 0;
}