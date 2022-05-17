#include<iostream>

using namespace std;


//?function overloading


int sum(int a, int b){

    return a + b;
}

int sum(int a, int b, int c)
{

    return a + b + c;
}

int main(){


    cout << sum(5, 5)<<endl;
    cout << sum(1, 5, 8)<<endl;

    return 0;


}