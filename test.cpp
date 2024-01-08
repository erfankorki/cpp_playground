#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    int b = 12;
    int c;
    c = a;
    a = b;
    b = c;
    cout << a << endl << b << endl;
    return 0;
}
