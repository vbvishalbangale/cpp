#include<iostream>

using namespace std;

///! shoeb bhai batayengae yepa thoda confusion hai

//? operator precedence
// jo operator ki priroty high hogi wo pehle evaluate hoga

//? note : aur agar same priroty ke operators ek hi line me aajate hai
//? to fir unki tie accosiativity se todte hai --> left to right ya right to left 

int main(){

    int a = 5;
    int b = 3;
    int c;

    c = ((((a * 5) + 56) - 5) + b);

    cout << c;

    return 0;

}