#include<iostream>
#include<cstring>
using namespace std;
/*
https://www.youtube.com/watch?v=RBAWWutf0fY&list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL&index=58
Abstract Base Class & Pure Virtual Functions in C++
-Abstract virtual function is interrealted with pure virtual function
-Abstract Base Class should atleast have one pure virtual funciont
-Pure virtual functin is used to amke Abstract class
-Abstract class is made so that other class can inheritate from it and only the functions of derived class are performed
even when pointer type is of base class/Abstract Base class
*/
class CWH
{
   protected:
   string title;
   float rating;
   public:
   CWH(string c,float r)
   {
       title=c;
      rating=r;
   }
   virtual void display()=0 ;// Do-Nothing function -->Pure function
  
};

class CWH_video:public CWH
{
    private:
    float videoLen;
    public:
    CWH_video(string s,float r,float VL):CWH(s,r)
    {
          videoLen=VL;
    }
    void display(){
      cout<<"Title Name : "<<title<<endl;
      cout<<"Video length : "<<videoLen<<endl;
      cout<<"Rating : "<<rating <<"/5"<<endl;
    }

};

class CWH_text:public CWH
{
  int word_count;
  public:
  CWH_text(string s,float r,int wc):CWH(s,r)
  {
     word_count=wc;
  }
  void display()
  {
     cout<<"Text Title Name : "<<title<<endl;
      cout<<"Words count : "<<word_count<<endl;
      cout<<"Text Rating : "<<rating <<"/5"<<endl;
  }
};
int main()
{
    
    int wordc;

    //for video
    string title;
    float vlen,rating;
    title="Falling in love ";
    vlen=3.45f;
    rating=4.5f;
    CWH_video v1(title,rating,vlen);
    //v1.display();
  
  


    //for  test
    string textTi;
    float ratingTex;
    textTi="Falling in love lyrics ";
    wordc=120;
    ratingTex=4.5f;
    CWH_text v2(title,ratingTex,wordc);
    //v2.display();
   
   CWH *tut[2];
   tut[0]=&v1;
   tut[1]=&v2;
   tut[0]->display();
   tut[1]->display();
  return 0;

}