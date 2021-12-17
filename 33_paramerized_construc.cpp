#include<iostream>
#include<math.h>
using namespace std;
class point
{
  private :
  int x;
  int y;
  public:
  point(int ,int );
  point distancepoint(point,point);
  void display();
  friend float distance(point a,point b);

};
point::point(int a,int b)
{
  x=a;
  y=b;
}
void point::display()
{
  cout<<"Point is "<<"("<<x<<","<<y<<")"<<endl;
}
point point::distancepoint(point a,point b)
{
    point c(0,0);
    c.x=b.x-a.x;
    c.y=b.y-a.y;
    return c;
}
float distance(point a,point b)
{
   return sqrt(pow((b.x-a.x),2)+pow(b.y-a.y,2));
}
int main()
{
  point p(1,1);
  point q(1,1);
  point dist(0,0);
  p.display();
  q.display();
  dist=dist.distancepoint(p,q);
  dist.display();
  cout<<"The distance between the point is "<<distance(p,q);
  return 0;
}