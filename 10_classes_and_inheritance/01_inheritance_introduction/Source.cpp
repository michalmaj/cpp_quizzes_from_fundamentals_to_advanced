/*
 * In C++ we can derive a class from another class, called a base. The derived class can access
 * members and functions of the base class.
 */


#include"main.hpp"

int main()
{
    //Create an instance of the derived class, 
    //GradStudent
    GradStudent gs1;

    //Set the id of the grad student
    //using the function in the base class
    gs1.setId(123456789);

    //Set the degree of the grad student
    //using the function in the derived class
    gs1.setDegree("BSEE");

    std::cout << gs1.getId() << " " << gs1.getDegree();
    return 0;
}