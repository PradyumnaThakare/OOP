/* C++ Templates: Templates with Multiple Parameters */
#include<iostream>
using namespace std;
/*
Class template with multiple paramerter
template<class T1,class T2,class T3............(commma spearted)>

 template<class T1,class T2>
 class nameOfClass
 {
   //class body;
 };

*/
template<class T1,class T2>
class MyCLASS
{
   public:
   T1 data1;
   T2 data2;
   MyCLASS(T1 A,T2 B)
   {
      this->data1=A;
      this->data2=B;
   }
   void display()
   {
     cout<<"Data 1 "<<this->data1<<endl;
     cout<<"Data 2 "<<this->data2<<endl;

   }
};
int main()
{
  MyCLASS <int,char> obj(23,'a');
  obj.display();
  return 0;
}