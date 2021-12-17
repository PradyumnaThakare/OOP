#include<iostream>
using namespace std;

class shop
{
   private:
   int itemID[100];
   int itemPRICE[100];
   int counter;
   public:
   void intcounter(){ counter =0;}//intializing counter to 0
   void setPrice();
   void displayPrice();
};
void shop::setPrice()
{
   cout<<"Enter the itemId of item "<<counter<<" : ";
   cin>>itemID[counter];
   cout<<"Enter the item of Price "<<counter<<" : ";
   cin>>itemPRICE[counter];
   counter++;
}
void shop::displayPrice()
{
  for(int i=0;i<counter;i++)
  {
    cout<<"Enter the itemId of item "<<i<<" : ";
   cout<<itemID[i]<<endl;
   cout<<"Enter the item of Price "<<i<<" : ";
    cout<<itemPRICE[i]<<endl; 
  }
}
int main()
{
  int n;
  cout<<"Enter the number of items ";
  cin>>n;
  shop i1;
  i1.intcounter();
  for(int i=0;i<n;i++)
  {
    i1.setPrice();
  }
  
  cout<<"Display items "<<endl;
    i1.displayPrice();
  
  return 0;
}