#include<iostream>
using namespace std;
//int i=1;
class mall
{
	private:
		int i;
		int id[50];
		int price[50];
		//id=0,price=0;
		
	public:
			
		void getdata();
		// void jcounter()
		// {i=0;
		// }
		void display();
		
};


void mall::getdata()
{
    for ( i = 0; i < 5; i++)
    {    
        cout<<"enter iteam id "<<i+1<<endl;
        cin>>id[i];
        cout<<"enter iteam price "<<i+1<<endl;
        cin>>price[i];
    }
}
void mall::display()
{
	
for(int j=0;j<i;j++)
{
    cout<<"your iteam id is : "<<id[j]<<endl
    <<"and price is : "<<price[j]<<endl;
}

}

int main()
{
	mall shope;
		// shope.jcounter();
	// for(int z=0;z<5;z++)
	// {
	

	shope.getdata();
// }

	shope.display();

	return 0;
}