/*The goal of this quiz is to practice writing and reading files.
 ***Read the contents of input.txt and then write to it.
 **
 **We are using input.txt as our file. This is not an ideal
 **situation, because when we write to it, we cannot
 **see the changes. We can manually write in input.txt and
 **we can also use the program to write to the file.
 **Then we can read what we wrote using our program.
 **
 **Your assignment for this quiz
 **
 **Change the contents of the file called input.txt
 **Change the ifstream and ofstream to fstream
 */

#include <iostream>
#include <fstream>
#include <string>
#include <ios>

int main()
{
	std::string line{};

	// Create a combination of ofstream and ifstream: creates, reads, and writes to files
	std::fstream my_file("input.txt", std::ios::app);

	// Check if file is open
	if (my_file.is_open())
	{
		my_file << "\nI am adding a line.\n";
		my_file << "I am adding another line.\n";

		// Remember to close file.
		my_file.close();
	}
	else
		std::cout << "Unable to open file.\n";


	// For reading purpose re-open the file.
	my_file.open("input.txt");

	if(my_file.is_open())
	{
		while (std::getline(my_file, line))
		{
			std::cout << line << std::endl;
		}
		my_file.close();
	}
	else
		std::cout << "Unable to open file.\n";


	return 0;
}