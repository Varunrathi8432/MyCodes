#include <iostream>
#include <list>
using namespace std;

// **************************** LISTS IN STL IN C++ **************************************

void display(list<int> &lst)
{
    list<int>::iterator itr;
    for (itr = lst.begin(); itr != lst.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}
int main()
{
    list<int> lst;
    int element;

    for (int i = 0; i < 5; i++)
    {
        cout << "enter elements you want to add in list : ";
        cin >> element;
        lst.push_back(element);
    }
    display(lst);

    // sorting in list
    // lst.sort();
    // display(lst);

    return 0;
}

/*
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
FOR MORE DETAIL IN LIST GO ON GOOGLE AND SEARCH " LIST REFERENCE IN C++ "
&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&     
*/
