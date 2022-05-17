#include <iostream>
using namespace std;




int main(){

    // BASIS EXAMPLE POINTER


    int a = 4;
    int *prt = &a;

    cout << *prt<<endl;

    // new keyword

    // int *p = new int(40);

    // cout << *p << endl;

    // int *arr = new int[3];

    // arr[0] = 10;
    // arr[1] = 20;
    // arr[2] = 30;

    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;


    //delete opertor 

    int *arr = new int[3];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete [] arr;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;

    return 0;
}