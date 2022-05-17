#include <iostream>

using namespace std;

//?function overloadeaded

//the valum of cylinder radius and hight

int valum(double a, int b)
{

    return (3.13) * a * a* b ;
}




int main()
{

    cout << valum(5, 5) << endl;


    return 0;
}