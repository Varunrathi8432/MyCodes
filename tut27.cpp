// ******************* Friend Funtion ********************
#include <iostream>
using namespace std;
class complex;
class complete
{
public:
    int setrealdata(complex, complex);
    int setvirtualdata(complex, complex);
};
class complex
{
    int a;
    int b;
    friend complete;

public:
    void getdata(int x, int y)
    {
        a = x;
        b = y;
        // cout<<"enter two numbers";
        // cin>>a>>b;
    }
};
int complete ::setrealdata(complex o1, complex o2)
{
    return o1.a + o2.a;
}
int complete ::setvirtualdata(complex o1, complex o2)
{
    return o1.b + o2.b;
}
int main()
{
    complex c1, c2;
    c1.getdata(2, 4);
    c2.getdata(3, 5);
    complete C;
    cout << C.setrealdata(c1, c2);
    cout << C.setvirtualdata(c1, c2);
}