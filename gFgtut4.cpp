#include<iomanip>
#include<iostream>
using namespace std;
int main(){
    float x=12.5643;
    double y=54345984.345676;
    cout<<fixed;
    cout<<x<<endl<<y<<endl;

    double z=87654567.097645;
    cout<<scientific;
    cout<<x<<endl<<z<<endl;

    int a=10,b,c;
    b=a++;
    c=++a;
    cout<<a<<endl<<b<<endl<<c<<endl;

    int p=10;
    p+=10;
    cout<<p<<endl;
    p/=2;
    cout<<p;

}