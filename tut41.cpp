#include<iostream>
using namespace std;

// ******************************* mutliple inheritance *****************************
class base1
{
    protected:
    int base1int;
    public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class base2
{
    protected:
    int base2int;
    public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class derieved : public base1, public base2
{
    public:
    void show()
    {
        cout<<"value oF base1 is : "<<base1int<<endl;
        cout<<"value oF base2 is : "<<base2int<<endl;
        cout<<"the sum oF base1 and base2 is : "<<base2int+base1int<<endl;
        
        
    }
};

int main()
{
    derieved data;
    data.set_base1int(10);
    data.set_base2int(20);
    data.show();
    return 0;

}