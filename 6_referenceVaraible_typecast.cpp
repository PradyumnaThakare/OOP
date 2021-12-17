#include<iostream>
using namespace std;

int c=100;//Global variable

int main()
{
	/******** Build in data type *********/
  int a,b,c;

  cout<<"Enter value a and b ";
  cin>>a>>b;
  c=a+b;
  cout<<"Sum "<<c<<endl;
  cout<<"Global variable c is  "<<::c<<endl; //  To use global variable in main or
 //                                            any function use :: slope resolution; 


float m=34.5f;
float q=34.5;
double n=34.5;
//if we pass the value 34.5 by default it will consider as double to consider as flaot
// use 34.5f;
   cout<<sizeof(34.4)<<" This is 34.4"<<endl;
   cout<<sizeof(34.4f)<<" This is  34.4f"<<endl;
   cout<<sizeof(34.4l)<<" This is long double 34.3l"<<endl;

   /********* Reference dataype  *******/
   // A variable having more than one name is called as reference varaible 
   int ram=100;
   //here both ramu and rama are  pointing to ram 
   int &ramu=ram;
   int &rama=ram;
   cout<<ram<<" "<<ramu<<" "<<rama<<endl;
//if any changes made in ream or rama will reflect in ram
   rama=1000;
   cout<<ram<<endl;

   //****** Type casting  **********
   float s=45.34;
   cout<<(int)s<<endl;
   char u='j';
   cout<<(int)u<<endl;
   int t=(int)u;
	return 0;
}