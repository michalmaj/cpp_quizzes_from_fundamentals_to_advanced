/*
 * In function we have a copy.
 * Any changes made in value don't affect the original variable.
 *
 * So, now we know that C++ respects variable scope. Changes to a variable that are made in
 * a function will not effect the variable in the main part of the program.
 *
 * There are two methods to rectify this situation:
 *  - Return the altered variable
 *  - Pass the variable as a reference
 */
#include<iostream>

void increment(int input);

int main()
{
    int a = 34;
    std::cout << "Before the function call a = " << a << "\n";
    increment(a);
    std::cout << "After the function call a = " << a << "\n";
    return 0;
}

void increment(int input)
{
    input++;
    std::cout << "In the function call a = " << input << "\n";
}