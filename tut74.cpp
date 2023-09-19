#include<iostream>
#include<functional>
#include<algorithm>

// ******************************** FUNCTION OBJECTS (FUNCTORS) IN C++ STL ********************************

using namespace std;
int main()
{
    int arr[] = {4,2,34,23,76,12};
    sort(arr,arr+6);
    sort(arr,arr+6,greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;

    }
    

}


/*
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
FOR MORE DETAIL IN FUNCTION OBJECTS GO ON GOOGLE AND SEARCH " FUNCTION OBJECTS REFERENCE IN C++ "
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&     
*/
