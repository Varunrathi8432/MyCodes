#include<iostream>
#include<cmath>
using namespace std;
class dist
{
    int a,b;
    public :
    dist(int x,int y)
    {
        a=x;
        b=y;

    }
    void display()
    {
        cout<<"the point are : ( "<<a<<" , "<<b<<" ) "<<endl;

    }
    // distance between two points are : ((x2-x1)^2-(y2-y1)^2)^1/2
    void  distance(dist v,dist r)
    {
        int dis;
        int k=v.a-r.a;
        int q=v.b-r.b;
        int res=sqrt(pow(k,2)+pow(q,2));
        dis = res;
        cout<<"the distance between points are : "<<dis;
    }
};
int main()
{
    dist d(1,1),v(1,1);
    d.display();
    v.display();
    d.distance(d,v);

}