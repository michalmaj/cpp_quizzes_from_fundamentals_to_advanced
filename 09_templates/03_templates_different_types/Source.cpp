/*
 * So far we have looked at functions where all the input parameters and return variables are the
 * same type. Now we will look at when the types are different.
 *
 * We will still use the same form, we will just need to tell the compiler that different variable
 * types are allowed.
 */

#include<iostream>

template <typename T, typename U>
T getBigger(T input1, U input2);


int main()
{
    int a = 5;
    float b = 6.334f;
    int bigger;
    std::cout << "Between " << a << " and " << b << " " << getBigger(a, b) << " is bigger.\n";

    std::cout << "Between " << a << " and " << b << " " << getBigger(b, a) << " is bigger.\n";
    return 0;
}

template <typename T, typename U>
T getBigger(T input1, U input2)
{
    if (input1 > input2)
        return input1;
    return input2;
}