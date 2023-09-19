#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    bool x=true;
    cout<<x<<endl;
    cout<<boolalpha;
    cout<<x<<endl;
    cout<<noboolalpha;
    cout<<x<<endl;

    int a=26,b=20;
    cout<<"normal : "<<a<<" "<<b<<endl;
    cout<<hex;
    cout<<"hexadecimal : "<<a<<" "<<b<<endl;
    cout<<oct;
    cout<<"octal : "<<a<<" "<<b<<endl;
    
    int y=90;
    cout<<setw(5);
    cout<<setfill('*');
    cout<<y;
}