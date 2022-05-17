#include<iostream>
using namespace std;

class employee{

    private :
        int a, b, c;

    public :
        int e, d;

        void setData(int a1, int b2, int c3);
        void getData() {

            cout << a<<endl;
            cout << b<<endl;
            cout << c<<endl;
            cout << e<<endl;
            cout << d<<endl;
        }
};

void employee :: setData(int a1, int b2,int c3){

    a = a1;
    b = b2;
    c = c3;
};

int main(){

    employee vishal;

    vishal.e = 40;
    vishal.d = 30;
    vishal.setData(12, 23, 34);
    vishal.getData();

    return 0;
};