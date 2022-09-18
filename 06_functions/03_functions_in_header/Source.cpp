/*
 **Goal: Practice putting functions in a header file.
 **Move the function declaration and definition to the header file.
 **Don't forget to include the header file (main.hpp) in the main program.
 */

#include "main.h"


int main()
{
    int m1 = 4;
    int m2 = 5;
    int product;

    product = m1 * m2;

    printProduct(m1, m2, product);
    return 0;
}

