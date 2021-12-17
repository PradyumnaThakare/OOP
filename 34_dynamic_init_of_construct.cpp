 /***************** Dynamic Initialization of Objects Using Constructors  ********************/
 #include<iostream>
 using namespace std;
 class Bankdeposit
 {
    private:
    int principal;
    int years;
    float intrest ;
    float returnValue;
    public:
    Bankdeposit(){};
    Bankdeposit(int princi,int time,float rate);
    Bankdeposit(int princi,int time,int rate);
    void show();
 }; 
 Bankdeposit::Bankdeposit(int princi,int time,float rate)
 {
   principal=princi;
   years=time;
   intrest=rate;
   returnValue=principal;
   for(int i=0;i<time;i++)
   {
     returnValue=returnValue*(1+rate);
   }
 }
 Bankdeposit::Bankdeposit(int princi,int time,int rate)
 {
   principal=princi;
   years=time;
   intrest=float(rate)/100;
   for(int i=0;i<time;i++)
   {
     returnValue=returnValue*(1+intrest);
   }
 }
void Bankdeposit::show()
{
  cout<<"Princpal : "<<principal<<" Time : "<<years<<" Intrest : "<<intrest<<" Reture value : "<<returnValue<<endl ;
}
 int main()
 {
   Bankdeposit b1,b2,b3;
   int p,t;
   float rate,ans;
   cout<<"Enter princpal ,years ,rate " ;
   cin>>p>>t>>rate;
   b1=Bankdeposit(p,t,rate) ;
   b1.show();
   cout<<"Enter princpal ,years ,rate ";
   cin>>p>>t>>rate;
   b2=Bankdeposit(p,t,rate);
   b2.show();
   cout<<"Enter princpal ,years ,rate ";
   cin>>p>>t>>rate;
   b3=Bankdeposit(p,t,rate);
   b3.show();

   
   return 0;
 }
