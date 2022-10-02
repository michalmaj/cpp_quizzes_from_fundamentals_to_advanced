/*
 * In the program below, overload the '+' operator to perform the following function:
 *	- Add the lengths of the two shapes together
 *	- Add the widths of the two shapes together
 *	- Calculate and return the area of the new shape
 */

#include "main.hpp"

int main(void)
{
	Shape sh1(4, 4);    // Declare shape1
	Shape sh2(2, 6);    // Declare shape2
	Shape sh3;          //Declare shape3

	int total = sh1 + sh2;
	std::cout << "\nsh1.Area() = " << sh1.Area();
	std::cout << "\nsh2.Area() = " << sh2.Area();
	std::cout << "\nTotal = " << total;
	return 0;
}