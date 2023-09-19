#include<iostream>
using namespace std;
bool isprime(int n){
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int nextprime(int n){
    while(true){
        n++;
        if(isprime(n))break;
    }
    return n;
}
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    cout<<nextprime(n);
}