//File I/O in C++: open() and eof() functions
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream out;
  out.open("60_sample1.txt");
  out<<"Hello"<<endl;
  out<<"World";
  out<<"My name is ";
  out.close();

  ifstream in;
  in.open("60_sample1.txt");
  string st; 
  //in>>s1>>s2>>s3;
  //cout<<s1<<s2<<s3;
  while(in.eof()==0){//eof() --> End of file
     getline(in,st);
     cout<<st<<endl;
  }
  in.close();
   return 0;
}