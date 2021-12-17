//C++ Templates: Class Templates with Default Parameters
 #include<iostream>
 using namespace std;
 template<class t1=int,class t2=float,class t3=char>
 class prad
 {
   private:
   t1 a;
   t2 b;
   t3 c;
   public:
   prad(t1 q,t2 w,t3 e)
   {
     a=q;
     b=w;
     c=e;
   }
   void display()
   {
     cout<<"Value a "<<a<<endl;
     cout<<"Value b "<<b<<endl;
     cout<<"Value c "<<c<<endl;
   }
 };
 int main()
{
   prad<> p1(3,4,'a');
   p1.display();
   cout<<endl;
   prad<float,char,char> p2(3.5,'z','a');
   p2.display();
   return 0;
}