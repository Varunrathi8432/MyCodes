// ********** functions **********

#include<iostream>
using namespace std;
// ************** function prototypes *************
int sum(int ,int);
void g();
int main()
{
    int num1,num2;
    g();
    cout<<"\nenter first number";
    cin>>num1;
    cout<<"enter second number";
    cin>>num2;
    cout<<"\nsum of numbers";
    cout<<sum(num1,num2);
    return 0;
}

int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
void g()
{
    cout<<"hello , good morning";
}
