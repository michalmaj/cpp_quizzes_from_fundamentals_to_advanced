/*
 * In C++, we can create generic classes as well as functions. We use the same template type
 * placeholder as we did for functions.
 */

#include "main.hpp"

int main()
{
    //StudentRecord is the generic class
    //The constructor sets the grade value
    StudentRecord<int> srInt(3);
    srInt.setId(111111);
    srInt.printGrades();

    StudentRecord<char> srChar('B');
    srChar.setId(222222);
    srChar.printGrades();

    StudentRecord<float> srFloat(3.333f);
    srFloat.setId(333333);
    srFloat.printGrades();

    StudentRecord<std::string> srString("B-");
    srString.setId(4444);
    srString.printGrades();

    return 0;
}