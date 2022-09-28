/*
 * C++ has a pointer called 'this'.
 * 'this' returns its own address.
 *
 * There are a few cases where 'this' might be necessary, but often using it is considered a
 * stylistic preference.
 */

#include <iostream>
#include "Shape.h"

int main()
{
	Shape s1{ 4, 6 };
	Shape s2{ 2, 6 };

	// Compare using 'this'
	if (s1.compareWithThis(s2))
		std::cout << "Shape1 is larger than Shape2\n";
	else
		std::cout << "Shape1 is smaller than Shape2\n";

	// Compare without 'this'
	if (s1.compare(s2))
		std::cout << "Shape1 is larger than Shape2\n";
	else
		std::cout << "Shape1 is smaller than Shape2\n";

	return 0;
}