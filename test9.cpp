#include<iostream>
using namespace std;
int main()
{
    int x,y;
    int z,w;
    int amt;
    cout<<"enter amount"<<endl;
    cin>>amt;
    cout<<"enter 5 rupees coin"<<endl;
    cin>>x;
    cout<<"enter 1 rupees coin"<<endl;
    cin>>y;
    if ((5*x)+(1*y)==amt)
    {
        cout<<x<<" no oF 5 rupees coin and "<<y<<" no oF 1 rupees coin used";
    }
    else if ((5*x)+(1*y)>amt)
    {
        if ((5*x)>=amt)
        {
            w=amt/5;
            z=amt%w;
            if ((5*w)+(z*1)!=amt)
            {
                cout<<"-1";
            }
            else
            {
                cout<<w<<" no oF 5 rupees coin and "<<z<<" no oF 1 rupees coin used";
            }
        }
        else if (x!=0)
        {
            z=amt%x;
            if (z==0)
            {
                w=amt-(5*x);
                cout<<x<<" no oF 5 rupees coin and "<<w<<" no oF 1 rupees coin used";
            }
            else
            {
                cout<<x<<" no oF 5 rupees coin and "<<z<<" no oF 1 rupees coin used";
            }
        }
        else
        {
            cout<<x<<" no oF 5 rupees coin and "<<amt<<" no oF 1 rupees coin used";
        }
    }
    else
    {
        cout<<"-1";
    }
}