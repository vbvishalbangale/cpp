#include <iostream>

using namespace std;

//! code ko jane ke liye note book mai jaye

//?enum
union employee
{
    int code;
    float salary;
    char name;
};

int main()
{   
    enum vb{ khana,ghumne, vapas};

    //!vb a = vapas;
    //! cout << (a==1);  flasse hai aap vapas 2 no pr aaye or 0 no pr aap ghumne gaye the

    vb a = vapas;
    cout << (a==2);//  abhi hai condition true hai 2 pr aap vaps aye hai esliye hai 1 dega output mai
    
    return 0;
}