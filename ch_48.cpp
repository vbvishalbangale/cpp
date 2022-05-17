#include <iostream>

using namespace std;

inline int product( int a, int b){

    return  a + b;
};

int main(){

    int a;
    int b;
    int c;

    cout << "Eneter the number";
    cin >> a >> b;

    cout  << product(a,b);

    return 0;

}