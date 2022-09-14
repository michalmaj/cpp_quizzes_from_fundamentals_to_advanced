/*
 * C++ has two forms of the while loop:
 *	- while loops
 *	- do .. while loops
 *
 * Syntax:
 *	while(condition)
 *	{
 *		statements;
 *	}
 *
 * If the condition is true, the statements within the curly brackets are executed. If the
 * condition is false, the statements are not executed.
 */

#include <iostream>

int main()
{
    int entry = 0;
    const int GOAL{ 5 };
    //with this while loop the condition is true
    //so the statements are executed
    while (entry <= GOAL)
    {
        std::cout << "incrementing entry = " << entry << "\n";
        entry++;
    }

    //with this while loop the condition is false (entry is 5 right now)
    //so the statements are not executed
    while (entry < GOAL)
    {
        std::cout << "decrementing entry = " << entry << "\n";
        entry--;
    }

    return 0;
}