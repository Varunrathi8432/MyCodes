#include<iostream>
using namespace std;

// ********************* TEMPLATES IN C++ **********************
template<class t>
class vector
{
    public:
    t *arr;
    int size;
    vector(int m)
    {
        size=m;
        arr = new t[m];
    }
    t dotproduct(vector &v)
    {
        t d = 0;
        for (int i = 0; i < size; i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector<float> vd(3);
    vd.arr[0]=1.4;
    vd.arr[1]=1.6;
    vd.arr[2]=1.8;

    vector<float> vd1(3);
    vd1.arr[0]=2.4;
    vd1.arr[1]=2.6;
    vd1.arr[2]=2.8;

    float a = vd.dotproduct(vd1);
    cout<<a;
}