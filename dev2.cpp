//swapping private data of a class 
#include<iostream>
using namespace std;

class after;
class before
{ 
    int a;
	public:
	
	void getdata1(void)
	{
		cout<<"enter the first number "<<endl;
		cin>>a;
	}
	void display1(void)
	{
		cout<<"first number is "<<a<<endl;
	}
	friend void swap(after & ,before &);
	
};

class after
{
	int b;
	public:
	void getdata2(void)
	{
		cout<<"enter second number "<<endl;
		cin>>b;
	}
	void display2(void)
	{
		cout<<"second number is "<<b<<endl;
	}
	friend void swap(after &,before &);
	
};

void swap(after &o1,before &o2)
{
	int temp;
	temp=o2.a;
	o2.a=o1.b;
	o1.b=temp;
	
}

int main()
{
	before be;
	after af;
	be.getdata1();
	af.getdata2();
    swap(af,be);
	cout<<"\nafter swaping"<<endl;
	be.display1();
	af.display2();
}