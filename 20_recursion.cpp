#include<iostream>
using namespace std;
int fibo(int num)
{
  if(num==0)
  return 0;
  if(num==1)
  return 1;

  return fibo(num-1)+fibo(num-2);
}
int fact(int n)
{
  if(n==1)
  {
    return 1;
  }
  return n*fact(n-1);
}
int  main()
{
  /********
    Recursion-> a function calling itself again and again
  ********/
  //Factorial of a number using recursion  5!=5*4*3*2*1 --> fact(5)=5*fact(4) -->fact(n)=n*fact(n-1)
  int n;
  cout<<"Enter the number ";
  cin>>n;
  cout<<fact(n)<<endl;

  int num;
  cout<<"Enter the nth term for geting the fibo ";
  cin>>num;
  cout<<fibo(num);
  return 0;
}