#include<iostream>
using namespace std;
class shop
{
    int itemid[10];
    int itemprice[10];
    int counter;
    int i;
    public :
    void setprice();
    void display();


};
void shop :: setprice()
{
    cout<<"enter no oF items \n";
    cin>>counter;

    for(i=0;i<counter;i++)
    {
        cout<<"enter id oF item "<<i+1<<endl;
        cin>>itemid[i];
        cout<<"enter price oF item "<<i+1<<endl;
        cin>>itemprice[i];

    }

    
}
void shop :: display()
{
    for(i=0;i<counter;i++)
    {
        cout<<"\nID oF item "<<i+1<<endl<<itemid[i]<<"\nprice oF item "<<i+1<<endl<<itemprice[i];

    }
}
int main()
{
    shop s;
    s.setprice();
    s.display();
    return 0;
}