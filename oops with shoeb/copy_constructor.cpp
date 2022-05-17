#include <iostream>
using namespace std;


class Value {

    int value;
    public:
        Value(){
            value = 0;
        }

        Value(int a){
            value = a;
        }

        // Value(Value & obj){
        //     cout << "Me copy constructor hu !!" << endl;
        //     value = obj.value;
        // }

        void printValue(void){
            cout << "The value is " << value << endl;
        }
};

int main(){

    Value v1,v2,v3(34);

    v1.printValue();
    v2.printValue();
    v3.printValue();

    //!copy constructor call hoga aur v3 ki value c me copy ho jayegi
    
    Value c(v3);
    c.printValue();

    return 0;
}