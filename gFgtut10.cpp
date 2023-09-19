#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int i=n*10;
    while(i>0){
        cout<<i <<" ";
        i=i-n;
    }
}