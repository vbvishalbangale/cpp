#include <iostream>
using namespace std;

// Forward declaration
class Number; // compiler ko bharosa dilana ke aage number class milegi dhundo use 


class calculator
{

public:
    int sum(Number obj); // yaha par sirf declaration
    int multi(Number obj); // yaha par sirf declaration
};

class Number{
    
    // friend int calculator ::sum(Number obj);
    // friend int calculator ::multi(Number obj);

    // bas bahot ho gya puri class ko hi friend banalo
    friend calculator;

    int num1;
    int num2;

public:
    void setNumber(int n1, int n2){
        num1 = n1;
        num2 = n2;
    }

    void getNumber(void){
        cout << "number is " << num1 << endl;
        cout << "number is " << num2 << endl;
    }
};

int calculator :: sum(Number obj){
    return (obj.num1 + obj.num2);
}
int calculator :: multi(Number obj){
    return (obj.num1 * obj.num2);
}


int main(){

    Number n;
    n.setNumber(3,5);
    n.getNumber();

    calculator c;
    int result = c.sum(n);
    int multi = c.multi(n);

    cout << "The sum is : " << result << endl;
    cout << "The multi is : " << multi << endl;

    return 0;
};