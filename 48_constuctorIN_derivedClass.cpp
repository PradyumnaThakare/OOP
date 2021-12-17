/* https://www.youtube.com/watch?v=gvOO4H7j_qI&list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL&index=46  

*********************Imp****************

**********  Constructor in derive class ************

Case 1:
         class B:public A
         {
             <Order of exrcition of constructor--> would be first A() and then b()>
         };
Case  2:
         class C:public B,public A
         {
          <Order of exrcition of constructor--> First B() then A() and then C()>
         };  
Case 3:
         class C:public B,virtual public A
         {
          <Order of exrcition of constructor--> First A() then B()) and then C()>
         };
case 4:
          class derived:public base1,public base2
          {
            int deriv1 ,deriv2;

            public:
            derived(int data1,int data2,int data3,int data4 ):base2(data2),base1(data1)
            {
              deriv1=data3;
              deriv2=data4;
              cout<<"Derive class constructor called "<<endl;
            } 
            <order wont be changed s>

*/
#include<iostream>
using namespace std;

class base1
{
  protected:
  int a;
  public:
  base1(int z)
  {
     a=z;
     cout<<"Base1 class constructor called "<<endl;
  }
  void printData_base1()
  {
    cout<<"The value of data is : "<<a<<endl;
  }
};

class base2
{
  protected:
  int b;
  public:
  base2(int z)
  {
     b=z;
     cout<<"Base2 class constructor called "<<endl;
  }
  void printData_base2()
  {
    cout<<"The value of data2 is : "<<b<<endl;
  }

};

class derived:public base1,public base2
{
  int deriv1 ,deriv2;

  public:
  derived(int data1,int data2,int data3,int data4 ):base1(data1),base2(data2)
  {
    deriv1=data3;
    deriv2=data4;
    cout<<"Derive class constructor called "<<endl;
  } 
  void print_data_derived()
  {
    cout<<"Derived1 "<<deriv1<<endl;
    cout<<"Derived2 "<<deriv2<<endl;
  }
};

int main()
{
  derived d1(2,3,4,5);
  
  d1.printData_base1();
  d1.printData_base2();
  d1.print_data_derived();
  return 0;
}
