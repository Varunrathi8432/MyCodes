#include<iostream>
#include<string>
#include<set>
using namespace std;
int lcm(int a,int b){
    int i;

    for (i=a>b?a:b;i<=(a*b);i++)
    {
        if(i%a==0 && i%b==0){
            break;
        }
    }
    return i;
}

void prime(int a,int b){
    int x=a<b?a:b;
    int y=a>b?a:b;
    for(int i=x;i<=y;i++){
        for(int j=2;j<i;j++){
            if(i%j==0)
                break;
            if(j==i-1){
                cout<<i<<" ";
                break;}
        }
    }
}

void high(long a){
    int max=0;
    while(a){
        if(max<a%10){
            // cout<<max<<" ";
            max=a%10;
        }
        a=a/10;
    }
    cout<<max;
}

void power(int x,int y){
    int mul=1;
    for(int i=0;i<y;i++){
        mul=mul*x;
    }
    cout<<mul;
}

int add(int a,int b,int c=0){
    return (a+b+c);
}

float area(int r){
    return 3.14*r*r;
}

int area(int l,int b){
    return l*b;
}

void arrswap(int & a,int & b){
    a=a+b;
    b=a-b;
    a=a-b;
}

void arrswap(string &a,string &b){
    string temp=a;
    a=b;
    b=temp;
}
void sort(int a[],int len,bool asc=true)
{
    for(int i=0;i<len;i++){
        for(int j=0;j<len-1-i;j++){
            if(asc==true && a[j]>a[j+1])
                arrswap(a[j],a[j+1]);
            if(asc==false && a[j]<a[j+1])
                arrswap(a[j],a[j+1]);
        }
    }
}

void sort(string s[],int len,bool asc=true){
    for(int i=0;i<len;i++){
        for(int j=0;j<len-1-i;j++){
            if(asc==true && s[j].length()>s[j+1].length())
                arrswap(s[j],s[j+1]);
            if(asc==false && s[j].length()<s[j+1].length())
                arrswap(s[j],s[j+1]);
        }
    }
}

void rotate(int a[],int size,int d=-1,int n=1){
    if(d==-1){
        for(int j=0;j<n;j++)
        {   
            int t=a[0];
            for(int i=0;i<size;i++)
                a[i]=a[i+1];
            a[size-1]=t;
        }
    }
    else{
        for(int j=0;j<n;j++)
        {   
            int t=a[size-1];
            for(int i=size-1;i>0;i--)
                a[i]=a[i-1];
            a[0]=t;
        }
    }
}

int maxnum(int a,int b,int c){
    if(a>b&&a>c)
        return a;
    else if(b>a&&b>c)
        return b;
    else
        return c;
}

int lcm(int a,int b,int c){
    int max=maxnum(a,b,c);
    int i;
    for (i=max;i<=(a*b*c);i++)
    {
        if(i%a==0 && i%b==0 && i%c==0){
            break;
        }
    }
    return i;
}

void primeFactor(int n){
    set<int> a;    
    for(int i=2;i<n;i++){
        while(n){
            if(n%i==0){
                a.insert(i);
                n=n/i;
            }
            else
                break;
        }
    }
    for(auto& arr : a){
        cout<<" "<<arr;
    }
}

int hcF(int a,int b)
{
    for(int i=a<b?a:b;i>0;i--){
        if(a%i==0&&b%i==0)
            return i;
    }
    return 1;
}

void substring(char s[20],int a,int b=19){
    for(int i=a;i<b;i++){
        cout<<s[i];
    }
}

void swap(int a1[20],int a2[20]){
    for(int i=0;i<20;i++){
        arrswap(a1[i],a2[i]);
    }
} 

int* merge(int a1[6],int a2[6]){
    static int m[12];
    int k=0,i=0,j=0;
    while(i<6 && j<6){
        if(a1[i]<a2[j]){
            m[k]=a1[i];
            i++;
            k++;
        }
        else{
            m[k]=a2[j];
            j++;
            k++;
        }
    }
    while(i<6 && k<12){
        m[k]=a1[i];
        i++;
        k++;
    }
    while(j<6 && k<12){
        m[k]=a1[j];
        j++;
        k++;
    }
    return m;
}

class complex
{
    private:
        int a;
        int b;
    public:
        void setvalue(int x,int y){
            a=x;
            b=y;
        }
        void display(){
            cout<<a<<"+"<<b<<"i";
        }
};

class circle
{
    private:
        int r;
    public:
        void setradius(int x){
            r=x;
        }
        float area(){
            return 3.14*r*r;
        }
        float circumFrence(){
            return 2*3.14*r;
        }
};


int main()
{
    circle c;
    c.setradius(3);
    float a=c.area();    
    float b=c.circumFrence();
    cout<<a<<endl<<b;    
}
    
    
