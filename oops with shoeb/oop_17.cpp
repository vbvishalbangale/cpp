#include <iostream>
using namespace std;

//Student----> test
//student ----->spoart
//test----->result
//sport---->result

//!virtual base example

class student{

    protected:
        int roll_number;

    public:

        void set_number (int a){

            roll_number = a;
        }
        void print_number(){

            cout << roll_number << endl;
        }
};

class test : public virtual student{

    protected :
        float math;
        float physics;

    public:

        void set_marks(float a, float b){

            math = a;
            physics = b;
        }
        void print_marks(){

            cout << math << ":"<<physics<<endl;
        }
};

class sport : public virtual student{

    protected:
        int score;
    public:

        void set_score(int a){

            score = a;
        }
        void print_score(){

            cout << score<<endl;
            ;
        }

};


class result : public test, public sport{

    private:
        float total;

    public:

        void display(){

            total = math + physics + score;

            print_marks();
            print_number();
            print_score();

            cout << total << endl;
        }
};





int main(){

    result vishal;

    vishal.set_marks(70.0, 80.0);
    vishal.set_number(58);
    vishal.set_score(10);
    vishal.display();

    return 0;
}