#include<iostream>
using namespace std;
class employee
{
   private :
   int id;
   int salary;
   static int empCount;
   public:
   void setData();
   void displayData();
   static void TotalEmp(){
     cout<<"Total employee : "<<empCount;
   }
};
void employee::setData()
{
  cout<<"Enter employee Id : ";
  cin>>id;
  cout<<"Enter employee salary : ";
  cin>>salary;
  empCount++;
}
void employee::displayData()
{
  cout<<"Enter employee Id : "<<id<<endl;  
  cout<<"Enter employee salary : "<<salary<<endl;
}
int employee::empCount=0;
int main()
{
   cout<<"Enter the number of employee : ";
   int n;
   cin>>n;
   employee fb[4];
   for(int i=0;i<n;i++)
   {
     fb[i].setData();
   } 
   for(int i=0;i<n;i++)
   {
       fb[i].displayData();
   }
   employee::TotalEmp();
  return 0;
}