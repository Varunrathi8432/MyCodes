#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n=8;
    int a[8]={1,2,3,4,5,6,7,8};
    int k;
    cin>>k;
    int j = 0;
    for(int i=0 ;i<k;i++)
    {
        int temp=a[0];
        while(j < i+1) {
           a[i] = a[j+1];
           j++;
        } 
         a[n-1]=temp;
    }
    for (int m= 0; m < 8; m++)
    {
        cout<<a[m];
    }
    
    return 0;
}