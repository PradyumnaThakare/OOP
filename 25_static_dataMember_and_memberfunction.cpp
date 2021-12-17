#include<iostream>
#include<string>
using namespace std;
/*
            ****Static data member*****
 see Static data member is used when u have to maintian the count for all the objects
*/
class employee
{
  private :
  string name;
  static int empCount;

  public:
  
  void getData()
  {
    cout<<"Enter the name of the employee "<<"  number "<<empCount<<endl;
    cin>>name;
    empCount++;
  
  }
  void display()
  {
     
    cout<<" Name of the employee : "<<name <<endl;
     
   
  }
  static void display_count()//Static funtion is used to access only the statics varaibles
  {
    cout<<"The employee count = "<<empCount<<endl;
  }

};
int employee::empCount=0;

int main()
{
  employee a[10];
  cout<<"Enter the no of the employee ";
  int no;
  cin>>no;
  for(int i=0;i<no;i++)
  {
     a->getData();
     employee::display_count();
      a->display();
  }
  
  return 0;
}