/*
 * Since vectors are instantiated without elements, we need to have a method to add elements. The
 * first method we learned is ::assign.
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

    // We first assign the value 23 to the vector. 
    std::cout << "Adding 23 to the vector\n";
    vectorInts.assign(1, 23);
    for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout << *it << " ";

    std::cout << "\n\nAdding four elements to the vector\n";
    //assigning the value 3 to 4 elements of the vector
    vectorInts.assign(4, 3);
    std::cout << "vectorInts has " << vectorInts.size() << " elements\n";

    //printing the contents of vectorInts
    std::cout << "VectorInts has these elements:\n";
    for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout << *it << " ";
    // What happened to the element with value 23? It was written over with a three.

    return 0;
}

