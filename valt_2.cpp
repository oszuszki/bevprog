#include <iostream>

using namespace std;

int main()
{
    int a = 7, b = 1;
    cout << "a = " << a << endl << "b = " << b << endl << "------" << endl;
    a = a * b;
    b = a / b;
    a = a / b;
    if (a == 0)
    {
        a = b;
        b= 0;
    }
    if (b == 0)
    {
        b = a;
        a = 0;
    }
    cout << "a = " << a << endl << "b = " << b;
    return(0);
}
