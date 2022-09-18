/*
 * In function we have a copy.
 * Any changes made in value don't affect the original variable.
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