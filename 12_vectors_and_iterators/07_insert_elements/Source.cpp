/*
 * Insert is another method to add elements to a vector.
 * Insert adds elements to the location after the iterator.
 *
 * To add elements using insert:
 *  - Set the iterator to one before the location where you would like to add an element.
 *  - Use insert to add the element.
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

    vectorInts.push_back(0);
    vectorInts.push_back(1);
    vectorInts.push_back(2);
    vectorInts.push_back(3);
    vectorInts.push_back(4);
    vectorInts.push_back(5);
    vectorInts.push_back(6);
    vectorInts.push_back(7);

    std::cout << "vectorInts has " << vectorInts.size() << " elements\n";

    //printing the contents of vectorInts
    std::cout << "VectorInts has these elements:\n";
    for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout << *it << " ";

    //insert an element after the first element (at index 1)
    it = vectorInts.begin() + 1;
    vectorInts.insert(it, -1);
    std::cout << "\n\nAfter the insert\n";
    for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout << *it << " ";

    //insert an element after the third element (at index 3)
    it = vectorInts.begin();
    vectorInts.insert(it + 3, -2);
    std::cout << "\n\nAfter the insert\n";
    for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout << *it << " ";

    //insert an element after the third element (at index 5)
    it = vectorInts.begin();
    vectorInts.insert(it + 5, -3);
    std::cout << "\n\nAfter the insert\n";
    for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
        std::cout << *it << " ";

    return 0;
}

