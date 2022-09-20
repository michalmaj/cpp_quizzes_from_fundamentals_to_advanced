/*
 * There is a special function member that we need to talk about, constructors.
 *
 * A constructor is special function that is executed whenever we create a new instance of
 * the class. It is used to set initial values of data members of the class.
 *
 * For example, in our Cats class we may want to have an initial value for the age of a cat
 * and it's breed. If we set initial values, we do not need to require the program or user
 * set every value.
 *
 * Goal: practice constructors
 */

#include "main.hpp"

int main()
{
    Cats cat1;
    std::cout << "Cat1 information: ";
    cat1.printInfo();
    return 0;

    return 0;
}