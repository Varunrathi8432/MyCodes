#include<iostream>
using namespace std;
// ********************* fUNCTION OVERLOADING ****************************
int sum(int a,int b)
{
    return a+b;
}
int sum(int a,int b,int c)
{
    return a+b+c;
}

int main()
{
    cout<<"the sum of numbers are : "<<sum(2,6,4)<<endl;
    cout<<"the sum of numbers are : "<<sum(2,6);
    return 0;
}