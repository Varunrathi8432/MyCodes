#include<iostream>
#include<map>
#include<string>
using namespace std;

// **************************** MAPS IN STL IN C++ **************************************

int main()
{
    map<string , int> marks;
    marks["varun"] = 99;
    marks["sandeep"] = 74;
    marks["devainder"] = 85;
    marks["govind"] = 68;

    map<string,int> :: iterator iter;
    for (iter=marks.begin(); iter!=marks.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    
} 

/*
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
FOR MORE DETAIL IN MAPS GO ON GOOGLE AND SEARCH " MAP REFERENCE IN C++ "
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&     
*/
