#include<iostream>
using namespace std;
int main()
{
    // int veg,nveg;
    int quan;
    int dis;
    int amt;
    char o;
    cout<<"enter v for veg and n for non veg food and enter quantity also"<<endl;
    cin>>o>>quan;
    cout<<"enter distance"<<endl;
    cin>>dis;
    if (o=='v')
    {
        if (dis<=3)
        {
            amt=120*quan;
        }
        else if (dis<=6)
        {
            amt=(120*quan)+3*(dis-3);
        }
        else
        {
            amt=(120*quan)+9+6*(dis-6);
        }
    }
    else if (o=='n')
    {
        if (dis<=3)
        {
            amt=150*quan;
        }
        else if (dis<=6)
        {
            amt=(150*quan)+3*(dis-3);
        }
        else
        {
            amt=(150*quan)+9+6*(dis-6);
        }
    }
    else
    {
        cout<<"invalid type";
        amt=-1;
    }
    cout<<"amount = "<<amt;
}