#include <iostream>

using namespace std;

// do while loop use in array

int main()
{

    int marks[4] = {20, 25, 34, 34};
    int i = 0;
    
    do{

        cout << marks[i] << endl;
        i++;
    } while (i < 4);

        return 0;
}