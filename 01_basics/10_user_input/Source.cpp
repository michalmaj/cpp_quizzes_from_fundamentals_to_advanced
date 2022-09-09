/*This program accepts inputs from the input.txt file*/

#include <iostream>


int main()
{
	int year{};
	int age{};
	std::string name{};

	// Print a message to the user
	std::cout << "What year is your favorite?: ";

	// Get the user response and assign it to the variable year
	std::cin >> year;

	// Output response to user
	std::cout << "How interesting, your favorite year is " << year << std::endl;

	// Print a message to the user
	std::cout << "At what age did you learn to ride a bike? ";

	// Get the user response and assign it to the variable age
	std::cin >> age;

	// Output response to user
	std::cout << "How interesting you learned to ride at: " << age << std::endl;

	std::cout << "What is your name? ";
	std::cin >> name;
	std::cout << "Hello " << name << "!" << std::endl;

}