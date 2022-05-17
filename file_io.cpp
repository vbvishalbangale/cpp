#include <iostream>
#include <fstream>

using namespace std;

int main(){

    string name;
    cout<<"Enter your name: ";
    cin>>name;

    ofstream sout("file1.txt");s

    sout << name << " is my name";
    // cout<<"Your name is : "<<name;

    sout.close();

    return 0;
}