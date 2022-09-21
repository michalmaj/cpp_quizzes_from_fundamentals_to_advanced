/*
 * Classes can have member functions that do more than just set or get data values. These helper
 * functions can perform tasks that are often requested or are easier to perform in the class itself.
 */

#include "main.hpp"

int main()
{
    Student s1;
    s1.setId(3232);
    s1.setGrade(0, 85);
    s1.setGrade(1, 80);
    s1.setGrade(2, 98);
    s1.setGrade(3, 65);
    s1.setGrade(4, 90);
    s1.printInfo();
    std::cout << "avg = " << s1.getAvg();
    return 0;
}