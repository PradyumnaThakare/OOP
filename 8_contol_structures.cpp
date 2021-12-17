#include<iostream>
using namespace std;
int main()
{
  cout<<"Tell me your age : ";
  int age;
  cin>>age;
  // Selection control statemants-> if elseif else ladder
  if((age<18)&& (age>0) )
  cout<<"Cant come to the party "<<endl;
  else if(age==18)
  cout<<"Will get a teen pass "<<endl;
  else if(age<1)
  cout<<"U are not born "<<endl;
  else
  cout<<"Will get a adult pass "<<endl;

  /********* Selection control statemants-> Switch case   **********/
  cout<<"Enter any number from 1 to 7 "<<endl;
  int num;
  cin>>num;
  switch(num)
  {
    case 1:
    cout<<"Mon"<<endl;
    break;
    case 2:
    cout<<"Tus"<<endl;
    break;
    case 3:
    cout<<"Wed"<<endl;
    break;
    case 4:
    cout<<"Thrus"<<endl;
    break;
    case 5:
    cout<<"Fri"<<endl;
    break;
    case 6:
    cout<<"Sat"<<endl;
    break;
    case 7:
    cout<<"Sun"<<endl;
    break;
    default :
    cout<<"Wrong input "<<endl;
  }
  return 0;
}