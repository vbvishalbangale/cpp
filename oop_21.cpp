#include <iostream>
using namespace std;

class complex{

    int real, imaginary;

    public:

            void setData(int a , int b){

                real = a;
                imaginary = b;
            }

            void getData(){

                cout << real<<endl;
                cout << imaginary<<endl;
            }
};

int main(){

    // complex c1;

     //!first step excute karne ka

    // c1.setData(10, 20);
    // c1.getData();

    // complex c1;

     //! 2 ra tarika step excute karne ka

        // complex *ptr = &c1;

        // (*ptr).setData(10,20);
        // (*ptr).getData();

    //! 3 ra tarika step excute karne ka

    // complex *ptr = new complex;

    // (*ptr).setData(10, 20);
    // (*ptr).getData();

    //! 4 ra tarika step excute karne

    //! array of obejcts

    complex *ptr = new complex[4];

    ptr->setData(10, 20); 
    ptr->getData();

    return 0;
}