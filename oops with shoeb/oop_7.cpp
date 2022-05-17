#include <iostream>
using namespace std;

//* Friend function

//?kese kam karta hai humne eis program mai dekha hai

class complex{

        friend complex setsum(complex o1, complex o2);
    int x, y;

    public:
        void setData(int a, int b){
            x = a;
            y = b;
        }

        void printData(){
            cout << x << " + " << y << "i" << endl; 
        }
};

complex setsum(complex o1, complex o2)
{   // esme hum ne direct  private  funtion le liye hai hai erro bata raha hai kyu ki public mai humne bataya nahi ki hai fiend
    // hai aisa aapko private mese kuch variable chahiye to aapn friend function bana sakte hai

    complex o3;

    o3.setData((o1.x + o2.x), (o1.y + o2.y));

    return o3;
}

int main(){

    complex c1, c2, c3;

    c1.setData(3, 4);
    c1.printData();

    c2.setData(1, 3);
    c2.printData();

    c3 = setsum(c1,c2);
    c3.printData();

    return 0;
};