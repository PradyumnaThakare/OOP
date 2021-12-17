#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  //connecting our files with out
  ofstream out("60_sample1.txt");
  //Writing in a file enter the name from user and storing it in file
  string str;
  cout<<"enter the name "<<endl;
  getline(cin,str);
  //Writing a string to the file
  out<<"My name is "<<str;

  out.close();//Ending the file

  //reading from a file
  ifstream in("60_sample1.txt");
  string str1;
 getline(in,str1);
 cout<<str1;
 in.close();
  return 0;
}