#include<iostream>
using namespace std;
int main(){
    int x=6;
    int y=4;
    cout<<(x&y)<<endl;// 110 AND 100 = 100(4)
    cout<<(x|y)<<endl;// 110 OR 100 = 110(6)
    cout<<(x^y)<<endl;// 110 XOR 100 = 010(2)

    cout<<(x<<1)<<endl; // leFt shiFt oF x { "00.....110" = "00....1100" } [Formula is x*(2^1)]
    cout<<(x<<2)<<endl; // leFt shiFt oF x { "00.....110" = "00...11000" } [Formula is x*(2^2)]

    cout<<(x>>1)<<endl; // Right shiFt oF x { "00.....110" = "00......11" } [Formula is Floor value oF x/(2^1)]
    cout<<(x>>2)<<endl; // Right shiFt oF x { "00.....110" = "00.......1" } [Formula is Floor value oF x/(2^2)]

    unsigned int z=3;
    cout<<(~z)<<endl; // Bitwise not oF z { "00.....11" = "11.....00" } [ print ((2^32) - 1) - 3 ]
    z=5;
    cout<<(~z)<<endl; // Bitwise not oF z { "00....101" = "11....010" } [ print ((2^32) - 1) - 5 ]

    int w=3;
    cout<<(~w); // For signed input in bitwise not { "00.....11" = "11.....00" } [ print (-x) oF 2's compliment oF w is (2^32) - x "x=-1-3"]

}