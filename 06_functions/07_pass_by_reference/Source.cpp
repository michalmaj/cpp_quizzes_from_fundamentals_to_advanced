/*
 * Passing by reference refers to passing the address of the variable rather than the
 * variable. Then when we make a change in a function, we are changing the value at the
 * address, not the variable. Once the value is changed at its address, any access to that
 * address will retrieve the new value.
 */

#include<iostream>

void increment(int& input); //Note the addition of '&'

int main()
{
    int a = 34;
    std::cout << "Before the function call a = " << a << "\n";
    increment(a);
    std::cout << "After the function call a = " << a << "\n";
    return 0;
}
void increment(int& input)//Note the addition of '&'
{
    input++; //**Note the LACK OF THE addition of '&'**
    std::cout << "In the function call a = " << input << "\n";
}