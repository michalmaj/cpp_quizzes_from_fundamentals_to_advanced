/*Goal: practice std::cin for strings
 **Write a program that prompts two users for their
 **name, address, and phone number.
 **Print the information to the console in the following format:
 **name
 **\/t\/t address
 **\/t\/tphone number
 */

#include <iostream>
#include <string>

int main()
{
	std::string u1_name{};
	std::string u1_address{};
	std::string u1_phone_number{};

	std::string u2_name{};
	std::string u2_address{};
	std::string u2_phone_number{};

	std::cout << "Enter user1 name ";
	std::getline(std::cin, u1_name);
	std::cout << "Enter user1 address ";
	std::getline(std::cin, u1_address);
	std::cout << "Enter user1 phone number ";
	std::getline(std::cin, u1_phone_number);

	std::cout << "Enter user2 name ";
	std::getline(std::cin, u2_name);
	std::cout << "Enter user2 address ";
	std::getline(std::cin, u2_address);
	std::cout << "Enter user2 phone number ";
	std::getline(std::cin, u2_phone_number);

	std::cout << u1_name << "\n\t\t" << u1_address << "\n\t\t"
	<< u1_phone_number<< std::endl;

	std::cout << u2_name << "\n\t\t" << u2_address << "\n\t\t"
		<< u2_phone_number << std::endl;

	return 0;
}