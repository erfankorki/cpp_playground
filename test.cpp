#include <iostream>

int main()
{

    int a = 10;
    int b = 12;
    int c;
    c = a;
    a = b;
    b = c;
    std::cout << a;
    std::cout << b;
    return 0;
}
