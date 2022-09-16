/*
 * Pointers, which are the addresses of variables, can be accessed in C++.
 */

#include <iostream>

int main()
{
    int a = 54;
    std::cout << "a = " << a << "\n";
    std::cout << "address of a is at &a = " << &a << "\n";
    return 0;
}