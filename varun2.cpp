#include<iostream>
#include<string.h>
using namespace std;
class person
{
    char name[20];
    int age;
    public : 
    person(char *s,int a)
    {
    	age=a;
        strcpy(name,s);
    }
    person greater(person &x)
    {
        if (x.age>=age)
        {
            return x;
        }
        else
        {
            return *this;
        }
    }
        void display()
        {
            cout<<name<<endl;
            cout<<age;
        }

};
int main()
{
    person p1("john",45);
    person p2("ibrahim",40);
    person p3("anil",35);
    person p = p1.greater (p2);
    person q = p.greater (p3);
    q.display();
    cout<<" is greater in";
    return 0;
}