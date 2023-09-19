#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter leap year : ";
    cin>>a;
    if (a%400==0){
        cout<<"leap year";
    }
    else if (a%4==0&&a%100!=0){
        cout<<"leap year";
    }
    else{
        cout<<"not leap year";
    }
    
}