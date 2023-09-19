#include <iostream>
using namespace std;
// ******************** inheritance *******************

// base class
class employee
{
public:
    int id;
    int salary = 3400;
    employee() {}
    employee(int impid)
    {
        id = impid;
        
        
    }

   
};

/*
dereived class syntax
class {{dereived class name }} : {{visibility mode }} class {{base class name }}
*/

// dereived class
class programer : public employee // by default visiblity mode is always private
{
    int codelanguage;

public:
    programer(int proid)
    {
        id = proid;
        codelanguage = 9;
    }
    void getdata()
    {
        cout<<id<<endl;
        cout<<codelanguage<<endl;
    }
};

int main()
{
    employee e(1);
    cout<<e.id<<endl;
    cout<<e.salary<<endl;
    programer p(2);
    cout<<p.salary<<endl;
    p.getdata();
    return 0;
}
