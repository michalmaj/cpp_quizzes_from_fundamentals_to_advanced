/*GOAL: Practice writing to the console and learn
**the variables types available in C++
**Print the sizes of each variable to the console.
**Print them in the following order:
**int, short, long, char, float, double, bool
**
**Use the command sizeof(variable type) ie: sizeof(int)
*/

#include <iostream>


int main()
{
	std::cout << "int size = " << sizeof(int) << "\n";
	std::cout << "int size = " << sizeof(short) << "\n";
	std::cout << "int size = " << sizeof(long) << "\n";
	std::cout << "int size = " << sizeof(char) << "\n";
	std::cout << "int size = " << sizeof(float) << "\n";
	std::cout << "int size = " << sizeof(double) << "\n";
	std::cout << "int size = " << sizeof(bool) << "\n";

	return 0;
}