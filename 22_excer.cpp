#include<iostream>
using namespace std;
class dog
{
   private:
   char name[50];
   int cost;
   int lifespan;

   public:
   void setdata();
   void getdata();
};
void dog::setdata()
{
  cout<<"Enter dogs name :"; 
  cin.getline(name,20);
  cout<<"Enter dogs cost :"; 
  cin>>cost;
  cout<<"Enter dogs lifespan :"; 
  cin>>lifespan;
}
void dog::getdata()
{
   cout<<"Dogs name : "<<name<<endl;
   cout<<"Dogs cost : "<<cost<<endl;
   cout<<"Dogs life : "<<lifespan<<endl; 
  
}
int main()
{
  dog d1;
 d1.setdata();
 d1.getdata();
  return 0;
}