/*
 **Goal: In the programming quiz, use a while loop to prompt
 **the user to guess a target number.
 **Tell the user if the guess is too high or too low.
 **The user enters 'q'  or guesses the target number to end
 **the program.
 */

#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <cstdlib>

int main()
{
    int guess = -1;
    std::string user_guess;

    //// Old C-style random number generator
    //srand(time(nullptr)); // set the seed for the random number generator
    //target = rand() % 100 + 1; // generate the 'random' number

    // C++11 random number generator
    std::random_device r;
    std::default_random_engine e1{ r() };
    std::uniform_int_distribution<int> uniform_dist(0, 100);
    int target = uniform_dist(e1);


    while (true)
    {
        std::cout << "Guess a number between 0 and 100 (enter -1 to finish): ";
        std::getline(std::cin, user_guess);
        if(user_guess == "q")
        {
            std::cout << "You are quit the game :(\n";
            break;
        }

        guess = std::stoi(user_guess);
        std::cout << target << std::endl;

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