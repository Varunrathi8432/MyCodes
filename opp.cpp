#include<iostream>
using namespace std;
class varun
{
    int a=10;
    int b=20;
    friend void add(varun obj);
};

void add(varun obj)
{
    cout<<obj.a+obj.b;
}

int main()
{
    // varun act;
    // add(act);
    int i=5;
    cout<<++i<<endl;
    cout<<i++<<endl;
    cout<<i++;

}