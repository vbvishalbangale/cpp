#include <iostream>
using namespace std;

/// oop

//! oop mai humko shoeb bhai comemnt laga ke dege

class student
{

    // private: // ! by default private hote hai sab
    int student_percentage;

public:

    int student_marks, roll_no;
    void setData(int student_marks1, int roll_no2);
    void setPercent(int percent);

    void getData()
    {

        cout << student_marks << endl;
        cout << roll_no << endl;
        cout << student_percentage << endl;
    }
};

void student ::setData(int student_marks1, int roll_no2)
{
    student_marks = student_marks1;
    roll_no = roll_no2;
};

void student :: setPercent(int percent){
    student_percentage = percent;
}

int main()
{

    student vishal;

    // vishal.student_percentage = 99; //! error aayega kyoki ye private hai

    vishal.setData(80, 58);
    vishal.setPercent(99);
    vishal.getData();

    return 0;
};
