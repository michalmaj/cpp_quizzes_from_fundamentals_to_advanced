/*
 * Functions
 * C++ supports functions, in fact main() is nothing more than a special C++ function.
 *
 * All C++ functions (except the special case of the main function) must have:
 *	- A declaration: this is a statement of how the function is to be called.
 *	- A definition: this is the statement(s) of the task the function performs when called
 *
 * C++ functions can:
 *	- Accept parameters, but they are not required
 *	- Return values, but a return value is not required
 *	- Can modify parameters, if given explicit direction to do so
 */

#include <iostream>

void printProduct(int& m1, int& m2, int& product);

int main()
{
    int m1 = 4;
    int m2 = 5;
    int product;

    product = m1 * m2;

    printProduct(m1, m2, product);
    return 0;
}

void printProduct(int& m1, int& m2, int& product)
{
    std::cout << m1 << " * " << m2 << " = " << product;
}