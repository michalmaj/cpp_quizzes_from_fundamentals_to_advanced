/*
 **Goal: In the programming quiz, use a while loop to prompt
 **the user to guess a target number.
 **Tell the user if the guess is too high or too low.
 **The user enters -1  or guesses the target number to end
 **the program.
 */

#include <iostream>
#include<sstream>

int main()
{
    //use 55 as the number to be guessed
    int target = 55;
    int guess = -1;

    while(true)
    {
	    std::cout << "Guess a number between 0 and 100 (enter -1 to finish): ";
    	std::cin >> guess;
    	std::cout << guess << "\n";

    	if (guess == -1)
        {
        std::cout << "You are quit the game :(\n";
        break;
        }

        if (guess > target)
            std::cout << "the guess is too high\n";
        else if (guess < target)
            std::cout << "the guess is too low\n";
        else if (guess == target)
        {
            std::cout << "You guess the correct answer!\n";
            break;
        }
        else
            std::cout << "Unknown command!\n";
    }


    return 0;
}
