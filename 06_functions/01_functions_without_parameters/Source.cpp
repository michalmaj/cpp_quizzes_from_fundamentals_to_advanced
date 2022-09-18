/*
 * Functions
 * C++ supports functions, in fact main() is nothing more than a special C++ function.
 *
 * All C++ functions (except the special case of the main function) must have:
 *	- A declaration: this is a statement of how the function is to be called.
 *	- A definition: this is the statement(s) of the task the function performs when called
 *
 * C++ functions can:
 *	- Accept parameters, but they are not required
 *	- Return values, but a return value is not required
 *	- Can modify parameters, if given explicit direction to do so
 */

#include <iostream>

// Example of function without parameters
void print_message(); // Function declaration BEFORE main()

int main()
{
    print_message(); // Function call 
    return 0;
}

//note, the definition is conventionally placed after main
void print_message()
{
    std::cout << "HEY! I'm from a function!";
}