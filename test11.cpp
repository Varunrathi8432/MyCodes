#include<iostream>
using namespace std;
int main()
{
    int num;
    int sum=0;
    cout<<"enter octal number = "<<endl;
    cin>>num;
    int temp=num;
    int count=0;
    int result[10];
    while (temp>0)
    {
        temp=temp/10;
        count++;
    }
    for (int i = count; i < 10; i++)
    {
        result[i]=0;
    }
    int temp2=num;
    int n;
    int j=0;
    int x=1;
    for (int i = 0; i < count; i++)
    {
        n=temp2%10;
        result[j]=n*x;
        temp2=temp2/10;
        x=x*8;
        j++;
    }
    for (int i = 0; i < 10; i++)
    {
        sum=sum+result[i];
    }
    cout<<"decimal no. = "<<sum;
    
}