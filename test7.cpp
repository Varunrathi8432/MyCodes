#include<iostream>
using namespace std;

void bsearch(int a[],int low,int n,int key)
{
    int high=n-1;
    int mid=(low + high)/2;
    cout<<mid;
    if (low==high)
    {
        cout<<low;
    }
    else if (key<=a[mid])
    {
        bsearch(a,low,mid,key);
    }
    else if (key>=a[mid])
    {
        bsearch(a,mid,n,key);
    }
    else if (low>high)
    {
        return ;
    }
    // {
    //     int mid=(low+high)/2;
    //     if (key==a[mid])
    //     {
    //         // cout<<mid;
    //         return mid;
    //     }
    //     else if (key<a[mid])
    //     {
    //         high=mid-1;
    //     }
    //     else
    //     {
    //         low=mid+1;
    //     }
    // }
    // return 0;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(int);
    int key=7;
    bsearch(arr,0,size,key);
}