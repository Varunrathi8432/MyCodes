#include<iostream>
using namespace std;

int main(){
    // char a = 'Z';
    // for(int i=0;i<26;i++){
    //     cout<<a;
    //     // cout<<endl;
    //     a--;
    // }
    int num;
    cin>>num;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    int c;
    for(int i=0;i<num;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}