#include<iostream>
using namespace std;
class sum
{
    int a=10;
    int b=20;
    friend void perameter(sum obj);
    friend void area(sum lic);
};

void perameter(sum obj)
{
    cout<<obj.a+obj.b<<endl;
}

void area(sum obj)
{
    cout<<obj.a*obj.b;
}

int main()
{
    sum pic;
    perameter(pic);
    area(pic);
}