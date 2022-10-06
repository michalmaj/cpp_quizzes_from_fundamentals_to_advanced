/*
 * Vectors are more versatile than arrays, and can be resized during runtime. We can also insert
 * elements into a vector.
 *
 * This characteristic adds a lot of freedom to vectors that we don't have with arrays. It also means
 * we have to adjust how we access elements in a vector. Since we can add elements anywhere in the
 * vector, we do not refer to the first element of a vector as the zero element, we call it the
 * beginning. The last element is called end. To keep track of where we are in the vector, we need an
 * iterator.
 */

 // constructing vectors
#include <iostream>
#include <vector>


int main()
{
    //creating a vector of integers
    std::vector<int> vectorInts;

	//creating an iterator for the vector
    std::vector<int>::iterator it;


    std::cout << "vectorInts has " << vectorInts.size() << " elements\n";

    std::cout << "\n\nAdding four elements to the vector\n";

	//assigning the value 3 to 4 elements of the vector
    vectorInts.assign(4, 3);
    std::cout << "vectorInts has " << vectorInts.size() << " elements\n";

    //printing the contents of vectorInts
    std::cout << "VectorInts has these elements:\n";
    for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout << *it << " ";

    return 0;
}
