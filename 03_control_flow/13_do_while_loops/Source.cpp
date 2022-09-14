/*
 * Syntax for do...while loop:
 *	do
 *	{
 *		statements;
 *	}while(condition );
 *
 * The statements are executed the first time through the loop. Then the condition is
 * checked. This is slightly different than the while loop. Which, you may recall, required
 * the condition to be true BEFORE entering the loop for the first time.
 */

#include <iostream>


int main()
{
    int count = 0;
    const int GOAL{ 5 };

    //This do..while loop will execute until count =5
    do
    {
        std::cout << "Count = " << count << "\n";
        count++;
    } while (count < GOAL);


    int otherCount = 6;
    //This do..while loop will execute once. Even though
    //otherCount > 5
    do
    {
        std::cout << "othercount = " << otherCount << "\n";
        otherCount++;
    } while (otherCount < GOAL);

    return 0;
}