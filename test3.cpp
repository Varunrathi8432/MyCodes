#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"enter value of a,b,c"<<endl;
    cin>>a>>b>>c;
    int mul;
    if (c==7)
    {
        mul=-1;
    }
    else if (b==7)
    {
        mul=c;
    }
    else if (a==7)
    {
        mul=b*c;
    }
    else
    {
        mul=a*b*c;
    }
    cout<<"multiple of a,b,c"<<endl<<mul;
    
}