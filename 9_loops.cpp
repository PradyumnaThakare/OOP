#include<iostream>
using namespace std;
int main()
{
  /*

   Loops
   1>for loop
   2>while loop
   3>do-while loop 

   */
  // ***** for loop ******
  /*
      for(initalization; condition; increment)
      {
        loop body
      }
  */
  for(int i=0;i<5;i++)
  {
      cout<<i<<endl;
  }

  /*
     ******whileloop******

     while(condition)
     {
        loop body;
        increment
     }
  */
  int i=10;
  while(i<=40)
  {
    cout<<i<<" ";
    i++;
  }
  /*
    *******do-while loop*******
    do
    {

    increment;
    }while(condition);
    
  */
   int j=0;
   do
   {
     cout<<j<<" ";
     j++;
   }while(j<=20);

  return 0;
}