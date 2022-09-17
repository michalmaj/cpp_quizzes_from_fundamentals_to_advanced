/*
**Goal: Practice array manipulation in C++.
 **The user will input 40 integers.
 **Put them into an array. Then print the array in the order the numbers were
 **entered. Then print in reverse order. Then sort the array in ascending order
 **and print it.
 **The each print of the array should separate the numbers in the array by
 **one space.
 **For example: the array were [3,4,55] the printout would be 3 4 55
 */

#include <iostream>
#include <algorithm>

int main()
{
    int userInput[40];
    // Enter numbers into array
	for (int i = 0; i < 40; i++)
    {
        std::cout << "Enter " << i + 1 << " number: ";
        std::cin >> userInput[i];
    }

    // Print the array
    for (int i = 0; i < 40; i++)
        std::cout << userInput[i] << " ";

    std::cout << std::endl;

    // Print the array in reversed order
    for (int i = 39; i >= 0; i--)
        std::cout << userInput[i] << " ";

    std::cout << std::endl;

    // Sort array (we need a algorithm header)
    std::sort(std::begin(userInput), std::end(userInput));

    // Print sorted array
    for (int i = 0; i < 40; i++)
        std::cout << userInput[i] << " ";


    return 0;
}