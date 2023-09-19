#include<iostream>
using namespace std;
int main()
{
    int x;
    int y;
    cout<<"enter x and y no."<<endl;
    cin>>x>>y;
    int sum=0;
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        a[i]=0;
    }
    int j=0;
    for (int i = x; i <= y; i++)
    {
        if (i%3==0&&i%5==0)
        {
            a[j]=i;
            j++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        sum=sum+a[i];
    }
    cout<<sum;
}