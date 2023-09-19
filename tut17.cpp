#include<iostream>
using namespace std;

// ********************** inline , default and constant function **************************

inline int product( int a, int b)
{
    return a*b;
}
float moneyreceived(int money,float interest=1.04)
{
     return money*interest;

}

int main()
{
    int a,b;
    cout<<"enter two nombers"<<endl;
    cin>>a>>b;
    cout<<"product of numbers = "<<product(a,b)<<endl;
    cout<<"enter money and interest(For VIP) : "<<endl;
    int money;
    float interest;
    cin>>money>>interest;
    cout<<"you have money: "<<money<<"Rs and interest in 1 year : "<<moneyreceived(money)<<endl;
    cout<<"for VIP persons "<<"you have money : "<<money<<"Rs and interest in 1 year : "<<moneyreceived(money,interest);
    return 0;
}