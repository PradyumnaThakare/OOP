/*
  When we do use nested fuction 
  when we keep are function private and also dont give asses to it in main function 
  therefore we  call in the member functions only
*/
#include<iostream>
#include<string>
using namespace std;
class binary
{
  private :
  string s;
  void checkBin();
  public:

  void getData();
  void onesCompliment();
  void display();
};
void binary::getData()
{
  cout<<"Enter the string "<<endl;
  cin>>s;
}
void binary::checkBin()
{
   for(int i=0;i<s.length();i++)
   {
     if(s.at(i)!='0' && s.at(i)!='1')
     {
       cout<<" Not binary \n";
      exit(0);
     }
   }
   cout<<"Binary "<<endl;
}
void binary::onesCompliment()
{
  checkBin();
  cout<<"Finding onesCompliment "<<endl;
   for(int i=0;i<s.length();i++)
   {
     if(s.at(i)=='0')
     {
       s.at(i)='1';
     }
     else if(s.at(i)=='1')
     {
       s.at(i)='0';
     }
   }
}
void binary::display()
{
  cout<<"Dislay binary no "<<endl;
  for(int i=0;i<s.length();i++)
  {
    cout<<s.at(i);
  }
  cout<<endl;
}
int main()
{
  /*
    1>oop --> classes and objects
    2>c++ --> was called c plus class earlier
    3>class was the extention of structure
    4>Structure had limitation 
     -> NO assess specifer (Ever thing was in public)
     -> no member function
    5> Class --> structure+more
    6> Class --> can have method as well as properties
    7> Class --> Have few members private and few public
    8> U can declare object along with class
         class employee
         {
            class body;

         } rohan,pradyumna,raj;

         raj.salary=10000;  (Makes no sense if salary is private)
   */
  binary n1;
  n1.getData();
  //n1.checkBin();
  n1.display();
  n1.onesCompliment();
  n1.display();
  return 0;
}