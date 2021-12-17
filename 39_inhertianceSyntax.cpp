/***** Inheritance syntax   -->>   Single inhertance (One base class & one derivted class )  *****/
#include<iostream>
#include<string>
using namespace std;
//Base class 
class employee
{
  private:
  string name;
  
  int salary;
  public:
  int id;
  employee()
  {
    id=0;
    salary=0;
  }
  employee(int iD)
  {
   id=iD;
   salary=100;
  }
  void display()
  {
    cout<<"Id : "<<id<<endl;
    cout<<"Salary : "<<salary<<endl;
  }


};
/* Derived class syntax 

1->class derived_class_name :visiblity mode base_class_name
{
  private:
  public:
}

creating a derived class named programer from base class employee 

2->Visiblity modes are two (private and public ) it is of inhertiance

3->Private visiblity mode : The public members of base class become private members of derived class
4->Public visiblity mode : The public members of base class become public members of derived class

5->Priavte members of base class can never be inherited

6->deault visiblity mode is private
 */

class programmer :public employee
{
    
    public:
    int langCode;
    programmer (int idp)//This will show error as id is private member of the base class
    {
      id=idp;
      langCode=9;
    }
    void display()
    {
      cout<<id<<endl;
    }
};

int main()
{
  employee prady(17),ishu(15);
  prady.display();
  ishu.display();

  programmer skill(3);
  skill.display();
  return 0;
}