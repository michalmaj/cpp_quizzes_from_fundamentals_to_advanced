/*
 * C++ provides a data structure, the array, which stores a fixed-size sequential
 * collection of elements of the same type. An array is used to store a collection of
 * data, but it is often more useful to think of an array as a collection of variables of
 * the same type.
 *
 * Instead of declaring individual variables, such as number0, number1, ..., and number99,
 * you declare one array variable such as numbers and use numbers[0], numbers[1], and ...,
 * numbers[99] to represent individual variables. A specific element in an array is
 * accessed by an index.
 *
 * All arrays consist of contiguous memory locations. The lowest address corresponds to
 * the first element and the highest address to the last element.
 */

#include <iostream>

int main()
{
	// C++ arrays can be declared in two ways:
	// variableType arrayName [ ] = {variables to be stored in the array};
	// For example (in modern C++ we can skip assign sign)
	int my_array1[]{ 1, 2, 3, 4, 5 };

	// or as
	// variableType arrayName[array size]
	int my_array2[10];


	return 0;
}