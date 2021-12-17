#include<iostream>
#include<cstring>
using namespace std;
class employee
{
  private:
   char name[10];
   int age;
   int salary;
  public:
  char gender;
  int roll;
  void setData(char name1[10],int age1,int salary1);//Function declaration 
  void getData()
  {
    cout<<" Name = "<<name<<endl;
    cout<<" Age = "<<age<<endl;
    cout<<" Salary = "<<salary<<endl;
    cout<<" Gender = "<<gender<<endl;
    cout<<" Roll = "<<roll<<endl;
  }

};

void employee::setData(char name1[10],int age1,int salary1)
{
   name[10]=name1[10];
   age=age1;
   salary=salary1;
}
int main()
{
   employee ram;
   ram.gender='M';
   ram.roll=16;
   char c[10]="ram";
   ram.setData(c,19,1000000);
   ram.getData();

  return 0;
}