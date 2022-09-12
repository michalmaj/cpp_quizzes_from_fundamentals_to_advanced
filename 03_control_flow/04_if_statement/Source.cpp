/*
 * if statement:
 * Conditionally executes another statement.
 *
 * Syntax:
 *	if(boolean expression)
 *		{
 *			//statements to execute if the boolean expression is true
 *		}
 */

#include<iostream>

int main()
{
    int a = 10;

    std::cout << "This program checks the value of a.\n";

    if (a == 6)
    {
        std::cout << "a is equal to a half dozen.\n";
    }

    std::cout << "There is not much to say about a\n";
    return 0;
}