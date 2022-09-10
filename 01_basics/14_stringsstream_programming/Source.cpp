/*
 *Goal: practice using stringstream
 **Goal: practice getting string inputs and
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room.
 **Then prompt for the width of the room. **Print out the area of the room.
 */

#include <iostream>
#include <string>
#include <sstream>

int main()
{
	std::string input{};
	float length{};
	float width{};
	float area{};

	std::cout << "Enter length of your room: ";
	std::getline(std::cin, input);
	std::stringstream(input) >> length;

	std::cout << "Enter width of your room: ";
	std::getline(std::cin, input);
	std::stringstream(input) >> width;

	area = length * width;
	std::cout << "Area of the room: " << area << std::endl;

	return 0;
}