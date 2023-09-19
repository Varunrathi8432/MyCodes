#include<iostream>
using namespace std;
int main()
{
int i;
int a[]={13,2,34,32,5};
// cin>>n;
// for(i=1;i<=n;i++)
// {
//     cin>>a[i];
// }
for(i=0;i<5;i++)
{
    if(a[i]==i+1)
    {
        cout<<i+1<<endl;
    }
    // else
    // {
    //     cout<<"not found";
    // }
}
return 0;
}

