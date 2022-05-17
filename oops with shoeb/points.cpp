#include <iostream>
using namespace std;

class Point {

    int x;
    int y;
    public: 

        // Default constructor
        Point (void){
            x = 0;
            y = 0;
        }


        // Parameterized constructor
        Point (int a, int b);


        //display function to display x and y points
        void display(void){
            cout<<"The points are ("<<x<<","<<y<<")"<<endl;
        }
};

Point :: Point (int a, int b){
    x = a;
    y = b;

}

int main(){

    // constructor jo hai automatic call ho jata hai
    // jab object banta hai tab 

    Point p1;
    p1.display();

    


    return 0;
}