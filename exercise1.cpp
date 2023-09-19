#include<iostream>
#include<cmath>

// *********************** exercise For practice *********************

using namespace std;
class simple
{
    int a;
    int b;
    public:
    void set_detail()
    {
        cout<<"enter a and b :"<<endl;
        cin>>a>>b;
    }

    void get_detail()
    {
        cout<<"The sum oF a and b : "<<a+b<<endl;
        cout<<"The sub oF a and b : "<<a-b<<endl;
        cout<<"The mul oF a and b : "<<a*b<<endl;
        cout<<"The div oF a and b : "<<float(a/b)<<endl;
    }   
};

class scientiFic
{
    int a;
    int b;
    public:
    void set_data()
    {
        cout<<"enter a and b :"<<endl;
        cin>>a>>b;
    }

    void get_data()
    {
        cout<<"The cos oF a : "<<cos(a)<<endl;
        cout<<"The sin oF b : "<<sin(b)<<endl;
        cout<<"The exp oF b : "<<exp(b)<<endl;
        cout<<"The tan oF a : "<<tan(a)<<endl;
    }
};

class hybrid : public simple,public scientiFic
{

};

int main()
{
    // simple si;
    // si.set_detail();
    // si.get_detail();
    // scientiFic sc;
    // sc.set_data();
    // sc.get_data();
    hybrid hc;
    cout<<"simple calculater : \n";
    hc.set_detail();
    hc.get_detail();

    cout<<"\nscientiFic calculater : \n";
    hc.set_data();
    hc.get_data();
    return 0;
}