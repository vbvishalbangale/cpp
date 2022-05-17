#include <iostream>

using namespace std;
//?  agar aapko pointer to pointer adress print karana hai to aisa kare 

int main()
{

    int a = 5;
    int *b = &a;
    int **c = &b;

    cout << c;

    return 0;
}
