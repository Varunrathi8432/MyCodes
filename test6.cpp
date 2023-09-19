#include<iostream>
using namespace std;

int countrab(int a,int b)
{
    if (b%2!=0||a==0||b>(a*4)||a>b)
    {
        cout<<"no solution";
        return -1; 
    }
    int count=0;
    count=(b-(2*a))/2;
    return count;
}
int main()
{
    // int head,leg;
    // int chik,rab;
    // cout<<"enter head and leg"<<endl;
    // cin>>head>>leg;    
    // rab=countrab(head,leg);
    // if (rab!=-1)
    // {
    //     cout<<"chiken = "<<head-rab<<endl<<"rabbit = "<<rab;
    // }

// ********************* made by me *********************
    int head,leg;
    int chik[2],rab[2];
    cout<<"enter leg and head"<<endl;
    cin>>leg>>head;
    if (leg%6==0 && head%2==0)
    {
        rab[0]=head/6;
        chik[0]=rab[0];
    }
    int tleg=1;
    chik[0]=head;
    rab[0]=0;
    while (chik[0]!=0&&tleg<leg)
    {
        chik[1]=chik[0]*2;
        rab[1]=rab[0]*4;
        tleg=chik[1]+rab[1];
        int tleg1=leg-tleg;
        int thead;
        if ((tleg1)%4==0)
        {
            thead=(tleg1)/4;
        }
        else
        {
            thead=((tleg1)/4)+1;
        }
        rab[0]=rab[0]+thead;
        chik[0]=chik[0]-thead;
        chik[1]=chik[0]*2;
        rab[1]=rab[0]*4;
    }
    int tleg1=chik[1]+rab[1];
    if (tleg>leg||(leg-tleg1)!=0)
    {
        cout<<"no solution";
        return 0;
    }
    cout<<"chiken = "<<chik[0]<<endl<<"rabbit = "<<rab[0];
}