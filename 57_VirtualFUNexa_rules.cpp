/*Virtual Functions Example + Creation Rules in C++*/
// https://www.youtube.com/watch?v=-noYyWtdXSI&list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL&index=57
#include<iostream>
#include<cstring>
using namespace std;
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
   virtual void display()
   {}
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
/*
Rules For Virtual funcion
1> They cannot be static
2>They accessed by object pointers
3>Virtual Functions can be a friend of another class
4>A virtual function is a base class canot be used
5>if A virtual function is defined in a base class,there is no necessity of redefining it 
in the derived class

*/