/*https://www.cplusplus.com/reference/list/list/*/
#include<iostream>
#include<list>
using namespace std;
void display(list<int>&l)
{
  list<int>::iterator it;

   for(it=l.begin();it!=l.end();it++)
   {
     cout<<*it<<" ";
   }
   cout<<endl;
}

int main()
{
  list<int>l1; //-->Will make (int)list of zero length
  
  l1.push_back(5);
  l1.push_back(6);
  l1.push_back(7);
  l1.push_back(8);
 
  display(l1);

  list<int>::iterator iter;//making of the iterator
  iter=l1.begin();
  cout<<*iter<<" ";
  iter++;
  cout<<*iter<<" ";
  iter++;
  cout<<*iter<<" ";
  iter++;
  cout<<*iter<<" ";

//Removing elements from the list
//l1.pop_front();
//l1.pop_back();
//l1.remove(7);--->Will remove 7 from the list and also will remove all the occurences from the list
//l1.remove()

//Sorting the list
//l1.sort();
//display(l1);

cout<<endl;
  list<int>l2(6);//-->Will make empty interger list of length 6;
  list<int>::iterator it;
  for( it=l2.begin();it!=l2.end();it++)
 {
    cin>>*it;
 }
 display(l2);

l1.sort();
l2.sort();
 //merging of l1 and l2;
 l1.merge(l2);
 display(l1);

 //Reversing a list
 l1.reverse();
 display(l1);
  return 0;
}