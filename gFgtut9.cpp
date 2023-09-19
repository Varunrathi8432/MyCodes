#include <iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
void primeFactor(int n){
    while(n % 2 == 0){
        n = n / 2;
        cout << "2 ";
    }
    for (int i = 3; i <= sqrt(n); i=i+2){
        while(n%i==0){
            n=n/i;
            cout<<i<<" ";
        }
    }
    if (n>2)
        cout<<n;
    
}
int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    if(isprime(n))
        cout<<n;
    else
        primeFactor(n);
}