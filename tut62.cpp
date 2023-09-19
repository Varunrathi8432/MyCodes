#include<iostream>
#include<fstream>
#include<string>
// ***************** File input output 2nd method ****************
using namespace std;
int main()
{
    // ofstream out;
    // out.open("sample.txt");
    // cout<<"enter name : \n";
    // string st;
    // cin>>st;
    // out<<st+" is intelligent ";
    // out.close();
    ifstream in;
    in.open("sample.txt");
    string st1;
    getline(in,st1);
    in>>st1;
    cout<<st1;
    return 0;
}