/*
 * There are two option to convert number from a string:
 *		- Use string library and built-in functions
 *			Numeric conversions
 *				stoi		converts a string to a signed integer
 *				stol		converts a string to a signed integer (long)
 *				stoll		converts a string to a signed integer (long long)
 *
 *				stoul		converts a string to an unsigned integer (long)
 *				stoull		converts a string to an unsigned integer (long long)
 *
 *				stof		converts a string to a floating point value (float)
 *				stod		converts a string to a floating point value (double)
 *				stold		converts a string to a floating point value (long double)
 *
 *				to_string	converts an integral or floating point value to string
 *
 *				to_wstring	converts an integral or floating point value to wstring
 */
#include <iostream>
#include <string>
#include <sstream>

int main()
{
	std::string cm{ "17.45" };
	float cm_from_string = std::stof(cm);
	std::cout << cm_from_string << std::endl;

	std::string stringLenght;
	float inches{};
	float yardage{};
	std::cout << "Enter number of inches: ";
	std::getline(std::cin, stringLenght);
	std::stringstream(stringLenght) >> inches;
	std::cout << "You entered " << inches << std::endl;
	yardage = inches / 36;
	std::cout << "Yardage is: " << yardage << std::endl;
	return 0;
}