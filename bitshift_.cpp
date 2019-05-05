#include <iostream>

using namespace std;
int main()
{
    int a = 1, counter = 0;
    while (a != 0 )
        {
            a <<= 1;
            counter++;
        }
    cout << "Az egy " << counter << " lepes utan lesz 0.\n";
    return 0;
}
