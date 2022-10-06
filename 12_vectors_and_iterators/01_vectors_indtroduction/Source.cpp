/*
 * https://en.cppreference.com/w/cpp/container/vector
 *
 * std::vector is a sequence container that encapsulates dynamic size arrays.
 * The elements are stored contiguously, which means that elements can be accessed not only through
 * iterators, but also using offsets to regular pointers to elements. This means that a pointer to an
 * element of a vector may be passed to any function that expects a pointer to an element of an array.
 *
 * The storage of the vector is handled automatically, being expanded as needed. Vectors usually
 * occupy more space than static arrays, because more memory is allocated to handle future growth.
 * This way a vector does not need to reallocate each time an element is inserted, but only when the
 * additional memory is exhausted.
 */

// constructing vectors
#include <iostream>
#include <vector>  //Need to include the vector library!


int main()
{
	//creating a vector of integers
	std::vector<int> vectorInts;
	std::cout << "vectorInts has " << vectorInts.size() << " elements\n";

	//Changing the size of vectorInts to 6
	vectorInts.resize(6);
	std::cout << "\n\nvectorInts now has " << vectorInts.size() << " elements\n";

	return 0;
}