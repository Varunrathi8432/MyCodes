#include<iostream>
using namespace std;
// ********************* RECURSION ***************************
int fact(int a)
{
    if(a<=1)
    {
        return 1;
    }
    return a * fact(a-1);
}
// ********************* fibnacchi is 1 1 2 3 5 8 13 21 34 .....
// ******** that means 1+1=2,1+2=3,2+3=5,5+8=13 ......
int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}


int main()
{
    int a;
    cout<<"enter a number : ";   
    cin>>a;
    cout<<"factorial of "<<a<<" is : "<<fact(a);
    cout<<"fibnacchi of "<<a<<" is : "<<fib(a);
    return 0;
}