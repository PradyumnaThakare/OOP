
/*
Syntax for Virtual Base class  is

class DerivedClassName : virtual visiblity_mode base_class
{
   class body
};
************
student--->test[Done]
student--->sports[Done]
test--->result
sports--->result
***************
*/
#include<iostream>
using namespace std;

class student{
  protected:
  int roll;
  public:
  void set_no(int a)
  {
    roll=a;
  }
  void print()
  {
    cout<<"Your Roll no is "<<roll<<endl;
  }
};

class test:virtual public student{
    protected:
    float math;
    float phy;
    public:
    void set_marks(float c,float v)
    {
      math=c;
      phy=v;
    }
    void print_marks()
    {
          cout<<"Your marks  in maths are : "
          <<math<<endl<<"Your marks  in phy are : "<<phy<<endl;
    }
};

class sports:virtual public student{
   protected :
   char football;
   char chess;
   public:
   void set_sports_marks(char a,char b)
   {
      football=a;
      chess=b;
   }
   void print_sports_marks()
    {
          cout<<"Your marks  in football are : "
          <<football<<endl<<"Your marks  in chess are : "<<chess<<endl;
    }
};

class result:public test,public sports
{
  private:
  float total;
   public:
   void total_result()
   {
    
     total=(math+phy)/2;
     cout<<" Your final percentage is : "<<total<<endl;
     print_marks();
     print_sports_marks();
   }
};
int main()
{
  result prad;
  prad.set_marks(98.23,95.63);
  prad.set_sports_marks('A','B');
  prad.total_result();
  return 0;
}