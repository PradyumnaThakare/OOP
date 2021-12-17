/*
  see when we had to set the values of the datamembers of the class we use to use set() function
  therefore  we use constuctor so that we dont net to write set() function to set the values of the
  private data type of the class
*/
#include<iostream>
using namespace std;
class complex
{
  private:
  int real;
  int img;
  public:
  // creating a constructor
  /*  constructor is the special member function which has same name as taht pf the class
      there are three types of constuctor
      It is automatically invoked
      1->Default Constructor (Value given by the programer to set the data type)
      2->Parameterized Constructor(Value given by the user to set the data type)
  */
 complex()//default constructor ->takes no parameter
 {
   real=0;
   img=0;
 }
 void display();
};

/* { initazilation out side class }
  complex::complex()
  {
    real=0;
    img=0;
  }
*/
void complex::display()
{
  cout<<"Complex : "<<real<<"i+"<<img<<endl;
}
int main()
{
   complex a;
   a.display();
}
/*      Properties of constructer 
    1->Always decalred in public section of the class
    2->There are automatically invoked when objects are declared 
    3-> Dont not have any datatype
    4->It can have default arguments
    5->WE canot refer to there address
*/