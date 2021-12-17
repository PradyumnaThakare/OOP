/*
 Ambiguity Resolution in Inheritance
 when we make inherited two or more class in a derived class
 and if those base class have the same name we have an ambiguity
 that is complier will excute which function 
 this is solved by Ambiguity Resolution 
*/
#include<iostream>
using namespace std;
class base1
{
  public :
  void greet()
  {
    cout<<" How are u ?"<<endl;
  }
};
class base2
{
  public:
  void greet()
  {
    cout<<" Kese ho ?"<<endl;
  }
};
class derived:public base1,public base2
{
  int a;
  public:
  void greet()/* Ambiguity Resolved by defining which fun to call  */
  {
      base1::greet();
  }
};
class b
{
  public:
  void say()
  {
    cout<<"Hello world "<<endl;
  }
};
class d : public b
{
  int a;
  public:
  // d's new say()  method will overwrite b's say()
  void say()
  {
    cout<<"Hello fuckers "<<endl;
  }
};
int main()
{
  /*
  ******* Ambiguity 1 *******
  base1 ob1;
  base2 obj2;
  ob1.greet();
  obj2.greet();

   derived d;
   d.greet();//Which greet to use base1 or base2
   */
  /* ******* Ambiguity 2 *******
  This gets automatically solved
   */
  b n1;
  n1.say();
  d n2;
  n2.say();

  return 0;
}