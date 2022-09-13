/*
 * Executes init-statement once, then executes statement and iteration-expression
 * repeatedly, until the value of condition becomes false. The test takes place before
 * each iteration.
 *
 * Syntax:
 * for (initialization; condition; increase) statement;
 */

#include <iostream>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << "i = " << i << "\n";
    }
    return 0;
}

