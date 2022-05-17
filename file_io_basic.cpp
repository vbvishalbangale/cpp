#include<iostream>
#include<fstream>


using namespace std;

int main(){

    string name = "Vishal bhai";
    int num;
    string st;

    // file ko open kiya aur usme output kar diya
    // isse hamne write operation kiya tha file pe
    // ofstream v("file1.txt");  // ye ek constructor hai
    // v<<name;
    // v << "Gaurav bhai ko salaam wo raat ko padhta hai aur ham saale sote hai 🤣🤣 ";

    // ye hai read operation
    ifstream c("file1.txt");
    // c >> num;

    // c>>st;
    getline(c, st);

    cout << st;

    return 0;
}