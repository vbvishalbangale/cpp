#include <iostream>
using namespace std;

//?  constructor ka kaam hai objects ko initialize ( value se karna) karna 
// ? waise hi destructor ka kaam hai ki jo memory constructor ne aquire (space  - memory ) jitni usne samet ke rakhi hai) ki hai usko free kar dena

class number
{
    int num;

public:
    number()// he constructor hai
    {
        cout << "I am a default constructor" << endl;
        num = 0;
    }

    ~number(){// he destructor hai
        cout<<"I am a destructor "<<endl;
    }

    void printNumber()
    {
        cout << "The number is " << num << endl;
    }
};

int main()
{
    // n1 object banaya 
    // fir n1 ke liye default constructor call hoga
    number n1;

    cout<<"Create n1 object "<<endl; // ye aise ke aise print hoga

    //? ye blocks ke ander ke elements ka scope iske andar hi raheta hai 
    //? blocks ke bahar unko koi nahi pahechanta hai
    {
        // n2 ke liye  pehle default constructor call hoga
        number n2;
    } // block khatm ho jayega aur n2 ka scope bhi khatm ho jayega 
    // to yaha par n2 ke liye destructor call ho jayega


    // kyoki n1 ka scope pure main() me hai to wo return 0 ke baad destroy hoga
    return 0;
}