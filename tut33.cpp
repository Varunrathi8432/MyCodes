#include <iostream>
using namespace std;
// ********************* dyanmic initialization *****************************
class bankdeposit
{
    int amount;
    int year;
    float interest;
    float returnvalue;

public:
    bankdeposit(int a, int y, float r);
    bankdeposit(int a, int y, int r);
    void show()
    {
        cout << "The amount you deposit is " << amount << ". The amount return in " << year << " years is : " << returnvalue;
    }
};
bankdeposit ::bankdeposit(int a, int y, float r)
{
    amount = a;
    year = y;
    interest = r;
    returnvalue = amount;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1+interest);
    }
}

bankdeposit ::bankdeposit(int a, int y, int r)
{
    amount = a;
    year = y;
    interest = float(r) / 100;
    returnvalue = amount;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1+interest);
    }
}

int main()
{
    
    int a;
    int y;
    float r;
    int R;
    cout<<"enter amount a y r"<<endl;
    cin>>a>>y>>r;
    bankdeposit bd(a,y, r);
    bd.show();
    cout<<endl<<"enter amount a y R"<<endl;
    cin>>a>>y>>R;
    bankdeposit bd1(a,y, R);
    bd1.show();
    return 0;
}