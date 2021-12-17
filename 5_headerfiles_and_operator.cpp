
/*
There are two types of header files 
1> System header file : Allready defined/comes with the complier*/
#include<iostream>   // press  ctrl on iostream to access the header file   https://en.cppreference.com/w/cpp/header

//2>Derived header file : Defined / written by the user
#include"this.h"
 
using namespace std;
int main()
{
  int a=10,b=8;
  cout<<" operatord in c++ "<<endl;
  cout<<"Following are the types of c++ operators "<<endl;
  //Arithermatic operator
  cout<<" a+b is "<<a+b<<endl; 
  cout<<" a-b is "<<a-b<<endl; 
  cout<<" a*b is "<<a*b<<endl; 
  cout<<" a/b is "<<a/b<<endl;// as is it int it does not giv value after the point; 
  cout<<" a%b is "<<a%b<<endl;// This  gives the reminder of the code; 
  //INcrement operator
  cout<<" a++ is "<<a++<<endl;// ++ is done after words first it prints 10 and the incerments it makin a=11; 
  cout<<" ++a is "<<++a<<endl;// ++ is done first so a becames 11 and then it printed 
  //decreement operator 
  cout<<" b-- is "<<b--<<endl; 
  cout<<" --b is "<<--b<<endl; 
  

  //Assingment operators   --> use to assign values to a variable
  int z=10,x=123;
  char m='0';


  //comparition operatos --> compares two value 
  cout<<" a==b is "<<(a==b)<<endl;    
  cout<<" a!=b is "<<(a!=b)<<endl; 
  cout<<" a<=b is "<<(a<=b)<<endl; 
  cout<<" a>=b is "<<(a>=b)<<endl; 
  cout<<" a<b is "<<(a<b)<<endl;
  cout<<" a>b is "<<(a>b)<<endl;  


  //logical operator;

  cout<<" (a==b)&&(a!=b) "<<((a==b)&&(a!=b))<<endl;   //both values  must  true 
  cout<<" (a!=b)||(a<=b)) is "<<((a!=b)||(a<=b))<<endl; //one value must be true
  cout<<" (!(a<=b)) "<<(!(a<=b))<<endl; 
  
  return 0;
}