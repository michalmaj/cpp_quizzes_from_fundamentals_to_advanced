#include <iostream>
#include <fstream>
#include <string>


int main()
{
	std::string line;

	// Create an output stream to write to the file.
	// std::ios::app appends the new line to the end of the file
	std::ofstream myFile("input.txt", std::ios::app);

	if (myFile.is_open())
	{
		myFile << "\I am adding a line.\n";
		myFile << "I am adding another line.\n";
		myFile.close();
	}
	else
		std::cout << "Unable to open file for writing\n";

	// Create an input stream to read the file
	std::ifstream myfileO("input.txt");

	// During the creation of ifstream, the file is opened.
	// So we do not have explicitly open the file.
	if(myfileO.is_open())
	{
		while (std::getline(myfileO, line))
		{
			std::cout << line << std::endl;
		}
		myfileO.close();
	}
	else
		std::cout << "Unable to open file for reading\n";


	return 0;
}