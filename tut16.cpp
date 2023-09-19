#include<iostream>
using namespace std;
// **************** call by refernce ******************
void swap(int* a, int* b) // by using pointer
{
    int temp;
    temp=*a;
    *a = *b;
    *b= temp;
}
void swap2(int &a,int &b) // by using reference variable
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int& swap3(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return a;
}
int main()
{
    int a=4 , b=5;
    cout<<"the value of first number is "<<a<<"\nthe value of second number is "<<b<<endl;
    swap(&a,&b);
    cout<<"the value of first number is "<<a<<"\nthe value of second number is "<<b<<endl;
    swap2(a,b);
    cout<<"the value of first number is "<<a<<"\nthe value of second number is "<<b<<endl;
    swap3(a,b) = 766;
    cout<<"the value of first number is "<<a<<"\nthe value of second number is "<<b;
    return 0;
 
}