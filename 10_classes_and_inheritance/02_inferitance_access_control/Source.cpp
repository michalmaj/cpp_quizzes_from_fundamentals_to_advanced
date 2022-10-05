/*
 * There are three types of access control: public, private, and protected.
 *	- Public Inheritance means all public members of the base class are accessible to the derived
 *	  class.
 *	- Private Inheritance means all members of the base class are private to the derived class.
 *	- Protected Inheritance means all members of the base class are protected to the derived class.
 */

#include"main.hpp"

int main()
{
    //Create an instance of the derived class, 
    //GradStudent
    GradStudent gs1;

    //Set the id of the grad student
    //using the function in the base class
    gs1.setStudentId(123456789);

    //Set the degree of the grad student
    //using the function in the derived class
    gs1.setDegree("BSEE");

    std::cout << gs1.getStudentId() << " " << gs1.getDegree();
    return 0;
}