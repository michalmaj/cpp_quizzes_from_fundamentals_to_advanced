/*
 * Destructors are special class functions that are called whenever an object goes out of
 * scope. Just like a constructor, a destructor is called automatically.
 * Destructors must have the same name as the class.
 *
 * One of the more important tasks of a destructor is releasing memory that was allocated by
 * the class constructor and member functions.
 */

#include "main.hpp"

int main()
{
    Dog d2(666666);
    std::cout << d2.getLicense();
    return 0;
}