#include<iostream>
using namespace std;
struct boy
{
  char name[50];
  int age;
  char gender[10];
};
// here u can initalize only one data type at a type 
// u will use only one dataype at a time either char or int we use union
//memory is shared by both char and int 
union female
{
  char gender;
  int age;

};

int main()
{
  enum meal{breakfast,lunch,dinner};
  meal m1=breakfast;
  meal m2=lunch;
  cout<<m1<<" "<<m2<<" "<<dinner<<endl; 

  union female f1;
  f1.age=14;
  cout<<f1.age<<endl;
  f1.gender='m';
  cout<<f1.age<<endl;

  struct boy b1;
  cout<<"Enter name : "<<endl;
  cin.getline(b1.name,50);
  cout<<"Enter age : "<<endl;
  cin>>b1.age;
  cout<<"Enter gender : "<<endl;
  cin>>b1.gender;

  cout<<b1.name<<" "<<b1.gender<<" "<<b1.age;
  return 0;
}