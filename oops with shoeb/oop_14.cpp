#include <iostream>
using namespace std;

//! multilevel inhiritance

//!shoeb bhai batayenge kyu cout nahi aa raha hai baki 2 function ka

class student{

    protected :
        int roll_number;
    public:
        void set_roll_number(int);
        
        void get_roll_number();
};

void student :: set_roll_number(int r)
{
    roll_number = r;
}

void student :: get_roll_number(){

    cout << "The roll number is " << roll_number << endl;
}

class Exam : public student{
   
    protected:
        
        float physics;
        float math;
    
    public:
        void set_marks(float, float);
        void get_marks(void);
};


void Exam :: set_marks(float p, float m){

    physics = p;

    math = m;
}

void Exam :: get_marks(){

    cout <<"The physics mark is :"<< physics<<endl;
    cout <<"The math marks is :"<<math<<endl;
}

class result : public Exam{

    float percentage;

    public:
        void display(){

            get_roll_number();

            get_marks();

            cout<<"The percentage is "<<(physics + math)/2<<"%"<<endl;
        }
};

int main(){

    result last;

    last.set_roll_number(58);
    last.set_marks(80.0, 96.0);
    last.display();
    return 0;
}