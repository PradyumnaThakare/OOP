/*https://www.cplusplus.com/reference/map/map/*/
#include<iostream>
#include<map>
#include<string>
using namespace std;
// Map is an associative array
int main()
{
  map<string,int> marksMap;
  marksMap["Prad"]=34;
  marksMap["ram"]=100;
  marksMap["ISh"]=90;
  marksMap.insert({{"gOVIND",0},{"Rishi",100}});
  map<string,int>::iterator itr;
  for(itr=marksMap.begin();itr!=marksMap.end();itr++)
  { 
   cout<<(*itr).first<<" "<<(*itr).second<<endl;
  }
  cout<<"Size of map "<<marksMap.size()<<endl;
  cout<<"Max Size of map "<<marksMap.max_size()<<endl;
  cout<<"Empting of map "<<marksMap.empty()<<endl;
  return 0;
  
}