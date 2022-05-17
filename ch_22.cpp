#include <iostream>

using namespace std;

//! aap loop chal rahe hai or aapko vlaue skip kr deni hai matlab aap 1 se 10 tak loop chala rahe hai or aapko 4 value skip karni matalab print nahi honi chahiye to aap continue word break ki jagah pr use kare


int main()
{

    for (int i = 0; i < 50; i++)
    {
        cout << i << endl;
        if (i == 2)
        {
            continue;
        }
    }

    return 0;
}