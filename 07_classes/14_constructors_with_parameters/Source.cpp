/*
 * C++ allows class constructors to accept parameters. These parameters will set the values of class
 * members when the object is created.
 */

#include "main.h"

int main()
{
    //an instance of Patient is
    //instanciated with a name
    Patient p1("Tammy Smith");
    std::cout << p1.getName() << std::endl;
    return 0;
}