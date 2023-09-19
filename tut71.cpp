#include <iostream>
#include <vector>
using namespace std;

// **************************** VECTORS IN STL IN C++ **************************************
template <class t>
void display(vector<t> &v)
{
    cout << "displaying oF vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1; // vector with no integer length
    // int size , element;
    // cout<<"enter size oF element : "<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"enter a element you want to add in vector : ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // display(vec1);
    // // vec1.pop_back();
    // // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter,34);
    // display(vec1);
    // vec1.insert(iter+1,3,34);
    // display(vec1);
    vector<char> vec2(4); // vector with 4 element character length
    // display(vec2);
    vector<char> vec3(vec2); // vector From vec2 with 4 element character length
    // display(vec2);
    vector<int> vec4(6, 3); // vector Filled with 3's element oF 6 element integer length
    display(vec4);
}

/*
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
FOR MORE DETAIL IN VECTOR GO ON GOOGLE AND SEARCH " VECTOR REFERENCE IN C++ "
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&     
*/
