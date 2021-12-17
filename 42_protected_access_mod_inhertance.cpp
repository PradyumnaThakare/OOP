/*** Procted access modifiers  ***/
#include<iostream>
using namespace std;
class base
{
  private:
  int a;
  protected:
  int b;
  public:
  int c;

};
/*
If u want to inheritate a and b in derived class there is only one way to do that
is by using proctected access modifier

                          private declaration     public declaration       protected declaration
   1. private  members      Not Inheritated           Not Inheriated           Not Inheritated
   2. protected members     Private                    Portected                   Protected
   3. public    members     Priavte                    Public                      Protected
    
*/
class derived:protected base{

};
int main()
{
  derived d1;
  /*
  cout<<d1.a;
  cout<<d1.b;    It will show error for all the three as derived class declaration is private
  cout<<d1.c;
  */
  
  //cout<<d1.b; // Will not work because b is inherited in derived class but its protected  
  //cout<<d1.c;//Will not work because c is inherited in derived class but its protected
  return 0;
}