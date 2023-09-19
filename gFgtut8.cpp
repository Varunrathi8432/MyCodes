#include<iostream>
using namespace std;
int Fab(int n){
    if (n==1||n==2){
        return 1;
    }
    return Fab(n-2)+Fab(n-1);
}
int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    cout<<Fab(n);
}