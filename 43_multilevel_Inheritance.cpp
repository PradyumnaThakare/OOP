#include<iostream>
using namespace std;

class student
{
  protected :
  int rollno;
  public:
  void setno(int n);
  void getno();
};
void student::setno(int n)
{
   rollno=n;
}
void student::getno()
{
  cout<<"Your roll no is "<<rollno;
}

class exam:public student
{
   protected :
   float math;
   float phy;
   public :
   void setMarks(float ,float);
   void getMarks();

};
void exam::setMarks(float a,float b)
{
  math=a;
  phy=b;
}
void exam:: getMarks()
{
  cout<<" Marks in Maths are  : "<<math<<endl;
  cout<<" Marks in Physics are  : "<<phy<<endl;
}
class result:public exam
{
  protected :
  float percentage;
  public:
  result();
  void display();
};
result::result()
{
  percentage=0;
}
void result::display()
{
  getno();
  getMarks();
  cout<<"Your percentage is "<<((math+phy)/2)<<endl;
  if(((math+phy)/2)>40)
  cout<<"U are pass "<<endl;
  else
  cout<<"U are fail "<<endl;
}
int main()
{
  /*
  Notes
  1. If we are inherting B from A and C from B [A-->B-->C]
  2. A is the base class for B and B is a base class for C
  3. ABC is called as inheritance path
  
  */
  result s1;
  s1.setno(69);
  s1.setMarks(90,95);
  s1.display();
  return 0;
}