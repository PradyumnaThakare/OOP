#include<iostream>
#include<cmath>
using namespace std;

class simpleCalculator
{
   protected :
   int a,b;
   
   public:
   void setdata(int,int);
   inline int Sum();
   inline int Mul();
   inline int Div();
   inline int Sub();
   void display();
};
inline void simpleCalculator::setdata(int a1,int b2)
{
   a=a1;
   b=b2;
}
inline int simpleCalculator::Sum()
{
   return a+b;
}
inline int simpleCalculator::Mul()
{
  return a*b;
}
inline int simpleCalculator::Div()
{
   return a/b;
}
inline int simpleCalculator::Sub()
{
  return a+b;
}
void simpleCalculator ::display()
{
  cout<<"Add "<<Sum()<<endl;
  cout<<"Mul "<<Mul()<<endl;
  cout<<"Div "<<Div()<<endl;
  cout<<"Sub "<<Sub()<<endl;
}

class scientificCalu
{
   protected :
   int c,d;
   public:
   public:
   void setdata1(int,int);
   inline float power();
   inline float squareroot();
   inline float cuberoot();
   void display2() ;
};

void  scientificCalu::setdata1(int c1,int d1)
{
  c=c1;
  d=d1;
}
inline float scientificCalu::power()
{
  return pow(c,d);
}
inline float scientificCalu::squareroot()
{
  return sqrt(c)+sqrt(d);
}
inline float scientificCalu::cuberoot()
{
  return cbrt(c)+cbrt(d);
}
void scientificCalu::display2()
{
  cout<<"Power  "<<power()<<endl;
  cout<<"Sum of sqrt "<<squareroot()<<endl;
  cout<<"Sum of cbrt"<<cuberoot()<<endl;
}
class hybridCalculator:public simpleCalculator,public scientificCalu
{
   public:
   void display3();
};
void hybridCalculator::display3()
{
  cout<<" Type of inherritance used it Multiple Inheritance "<<endl;
  cout<<" Access Modifier used for inheritant class is proctected "<<endl;
}

int main()
{
   hybridCalculator h1;
   h1.display3();
   h1.setdata1(4,2);
   h1.setdata(10,5);
   h1.display();
   h1.display2();
  return 0;
}
