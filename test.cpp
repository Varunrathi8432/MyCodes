#include<iostream>
using namespace std;
long double fact(int n)
{
    if (n<=1)
    {
        return 1;
    }
    
    return n*fact(n-1);
    
}

long double fact1(int n)
{
    long double fact1=1;
    for (int i = 1; i <= n; i++)
    {
        fact1=fact1*i;
    }
    return fact1;
}

int main()
{
    // long double m = fact(24);
    // cout<<m;
    long double m = fact1(24);
    cout<<m;

    //    cout<<"hii";
    //    return 0;
}