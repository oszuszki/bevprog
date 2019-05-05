#include <iostream>

using namespace std;

int main()
{
    int a = 7, b = 1;
    cout << "a = " << a << endl << "b = " << b << endl << "------" << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a = " << a << endl << "b = " << b;
    return(0);
}
