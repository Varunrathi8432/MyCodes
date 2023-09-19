#include<iostream>
#include<fstream>
#include<string>
// ***************** File input output method ****************
using namespace std;
int main()
{
    ofstream out("sample.txt");
    string st;
    st = "varun is intelligent";
    out<<st;
    out.close();
    string st1;
    ifstream in("sample.txt");
    getline(in,st1);
    in>>st1;
    cout<<st1;
    in.close();
}