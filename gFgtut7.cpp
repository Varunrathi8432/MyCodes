#include<iostream>
using namespace std;
int main(){
    unsigned long long n;
    cout<<"enter a number : ";
    cin>>n;
    int count=0;
    while (n>0)
    {
        while (n>0)
        {
            count+=n%10;
            n=n/10;
        }
        if (count>9)
        {
            n=count;
            count=0;
        }
    }
    cout<<count;
}