/*
 * std::getline(input, str, delimiter)
 * where:
 *		- input is the stream to get data from
 *		- the string to put the data into
 *		- the delimiter character (default is a new line)
 */

#include <iostream>
#include <string>

int main()
{
	std::string userName;
	std::cout << "Tell me your name: ";
	std::getline(std::cin, userName);
	std::cout << "Hello " << userName << std::endl;
	return 0;
}