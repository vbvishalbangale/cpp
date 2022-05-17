#include <iostream>
using namespace std;


// :: isko bolte scope resolution operator

class student //? class ek tarike se box hai jisme hum methods(function) and data members store kar sakte
{

private:

//  oops me data members matlab variables
//  and mathods matlab functions jo humne c me bhi dekhe the
    int roll_no;
    float percentage;
    void getStudent(void);

public:
    void setStudent(void);
};

void student ::setStudent(void)
{
    cout << "Enter your roll no : ";
    cin >> roll_no;
    cout << "Enter your percentage : ";
    cin >> percentage;

//? isko bolte nesting of member function matlab ek function ke ander dusre function ko call karna
    getStudent();
}

void student :: getStudent(void){
    cout<<"The roll no is : "<<roll_no<<endl;
    cout<<"The percentage is : "<<percentage<<endl;
}

int main()
{

    student vishal;
    // vishal.roll_no = 34; //! error kyoki ye private hai isko directly access nahi kar sakte
    // vishal.getStudent(); //! it makes no sense kyoki ye private hai

    vishal.setStudent();

    return 0;
}