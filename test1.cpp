#include<iostream>
using namespace std;
// ******** electricity bill generater **************
int main()
{
    int unit,sc,amt;
    cout<<"enter unit which is used"<<endl;
    cin>>unit;

    if (unit<=50)
    {
        sc=25;
        amt=(2.6*unit);
    }
    else if (unit<=100)
    {
        sc=35;
        amt=130+(3.25*(unit-50));
    }
    else if (unit<=200)
    {
        sc=45;
        amt=130+162.5+(5.25*(unit-100));
    }
    else
    {
        amt=130+162.5+525+(unit-200);
    }
    int total=amt+sc;
    cout<<"The amount you pay of your electricity bill"<<endl<<total;
}