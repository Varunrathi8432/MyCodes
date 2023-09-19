// there are two of header file 
// 1. system header file = it comes with compiler 
#include<iostream>
// 2. user  defined header file = it is written by the programer 
// #include"this.h" 




// *********************** cpp reference of header file == to search new header file in c++ with the help of google ****************


using namespace std;

int main()
{
    int a=7 ;
    cout<<"this is hello world program"<<endl;
    cout<<"the value of a++ is "<<a++<<endl;   // print 7 then + 1 now a=8
    cout<<"the value of a-- is "<<a--<<endl;   // print 8 then - 1 now a=7
    cout<<"the value of --a is "<<--a<<endl;   // - 1 then print 6 now a=6
    cout<<"the value of ++a is "<<++a<<endl;   // + 1 then print 7 now a=7
    
    
    return 0;
}