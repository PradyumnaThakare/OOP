#include<iostream>
using namespace std;

class complex;//Forward declaration 

class calculator
{
  public:
  int add(int a,int b)
  {
    return a+b;
  }
  int sumReal(complex n1,complex n2);//so complier does not shows erroe while compline 13th statement
                                    //Not delcareing here because complier does not know what a and b is before compling the class complex
  int sumImg(complex,complex);
 
};

class complex
{
  private:
  int real;
  int img;

  //individually  delacling function of other class as friends
  //friend int calculator::sumReal(complex n1,complex n2);
  //friend int calculator::sumImg(complex n1,complex n2);
  // friend function
  friend complex sumImga(complex,complex);

  // Declaring entier class as friend function
  friend class calculator;

  public:
  void set(int a,int b)
  {
      real=a;
      img=b;
  }
  void display()
  {
    cout<<"complex no : "<<real<<"+i"<<img<<endl;
  }
};

int calculator::sumReal(complex n1,complex n2)
{
     return (n1.real+n2.real);
}
int calculator::sumImg(complex n1,complex n2)
{
   return(n1.img+n2.img);
}
complex sumImga(complex n1,complex n2)
{
  complex c;
   c.set((n1.real+n2.real),(n1.img+n2.img));
   return c; 
}

int main()
{
  complex a,b,r;
  a.set(4,5);
  b.set(3,4);
  calculator c;
   int ans=c.sumReal(a,b);
   cout<<"The sum of the real part is "<<ans<<endl;
   int ans2=c.sumImg(a,b);
   cout<<"The sum of the img part is "<<ans2<<endl;
    
   r=sumImga(a,b);
   r.display();
  return 0;
}