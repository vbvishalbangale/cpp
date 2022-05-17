#include <iostream>
using namespace std;

class y;
class x{

    int num1;

    public:
        void setData(int a){

            num1 = a;

            

        }
            friend void sumData(x, y);
};

class y{

    int num2;

    public:
        void setData(int a){

            num2 = a;

            
        }
            friend void sumData(x, y);
};

void sumData(x o1 , y o2){

    cout << "The sum is : " << o1.num1 + o2.num2;
}

int main(){

    x a;
    a.setData(5);

    y b;
    b.setData(5);

    sumData(a, b);

    return 0;
}