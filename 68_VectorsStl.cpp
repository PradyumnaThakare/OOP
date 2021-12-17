#include<iostream>
#include<vector>
using namespace std;
/*https://www.cplusplus.com/reference/vector/vector/*/

template <class t>
void display(vector<t> &v)
{
  cout<<"Displaying this vector "<<endl;
  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
    //cout<<v.at(i)<<" ";
  }
}
int main()
{
//Ways to create vector 
vector<int> vect1;//zero length integer vector
//isplay(vect1);
vector<char>vect2(4);// 4-element charater vector
vect2.push_back('5');
//display(vect2);
vector<char>vect3(vect2);//4-element cahrater vector from vect2
//display(vect3);
vector<int>v(6,3);//6-element vector of 3's
display(v);
cout<<v.size();

//display(vect2);
 /*int element ,size;
 cin>>size;
 for(int i=0;i<size;i++)
 {
   cout<<"Enter the vector element : ";
   cin>>element;
   vect1.push_back(element);
 }*/
 //vect1.pop_back();
 //display(vect1);
 
 //vector<int>:: iterator iter=vect1.begin();//Declarion of iterator
 //vect1.insert(iter,69);
 //vect1.insert(iter+1,90);
 //vect1.insert(iter+1,3,100);
 //display(vect1);

  return 0;
}