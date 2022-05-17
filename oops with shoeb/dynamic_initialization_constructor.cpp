#include <iostream>
using namespace std;


//? dynamic constructor matlab runtime pe input ke base pe pata chalta hai ki konsa constructor call hoga

class IPL {

    int intData;
    float floatData;

public:
        IPL(void){
            intData = 0;
            floatData = 0;
        }

        IPL(int a)
        {
            intData = a;
        }

        IPL(float b)
        {
            floatData = b;
        }

        void printData(void){
            cout<<"The value of intData is : "<<intData<<endl;
            cout<<"The value of floatData is : "<<floatData<<endl;
        }

};

int main(){

    int a;
    float b;

    cout<<"Enter the value\n";
    cin>>b;

    IPL dhoni(b);

    dhoni.printData();

    return 0;
}  