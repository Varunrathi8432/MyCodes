#include<iostream>
using namespace std;
int main()
{
    int num[5];
    cout<<"enter 5 positive no.";
    // for (int i = 0; i < 5; i++)
    // {
    //     cin>>num[i];
    //     if (num[i]<0)
    //     {
    //         break;
    //     }
    // }

    int i=0;
    while (i<5)
    {
        cin>>num[i];
        if (num[i]<0)
        {
            break;
        }
        i++;
    }
    
    
    for (int i = 0; i < 5; i++)
    {
        cout<<num[i];
    }
    
}