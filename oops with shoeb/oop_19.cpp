#include <iostream>
using namespace std;

//! intionallization example

class test {

    int a;
    int b; 

    public:

    test(int i , int j) : a(i), b(j +i){

        cout << a<<endl;
        cout << b<<endl;

    }
};

int main(){

    test vishal(1, 2);

    return 0;
}