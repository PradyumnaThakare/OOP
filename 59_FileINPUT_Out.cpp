#include<iostream>
#include<cstring>
#include<fstream>//To play with files we will get it in fstream class
using namespace std;
/*
Usefull classes for working with files in c++ are
1. fstreambase :
2. ifstream: derived from fstreambase
3. ofstream: derived from fstreambase

*/
/*
In order to work with files in c++ ,you will have to open it ,
  Primarly there are 2 ways to open the files
  1. Using the constructor
  2. Usng the member fuction open() of class 
*/
int main()
{
   //Opening the file using constuctor and writing
    string str1="Hello world";
   ofstream out("59_sample1.txt");
   out<<str1;
   
    //Opening the file using constuctor and reading
    string str2;
    ifstream in("59_sample2.txt");
    //in>>str2;
    //cout<<str2;
     getline(in,str2);
     cout<<str2;
  return 0;
}