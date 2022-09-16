/*
 **For this program print for each variable
 **print the value of the variable,
 **then print the address where it is stored.
 */

#include<iostream>
#include<string>

int main()
{
    int givenInt{ 32 };
    float givenFloat{ 64.212f };
    double givenDouble{ 4.76545 };
    std::string givenString{"Hey look at me! I know pointers!"};
    char givenChar{'*'};

    std::cout << "givenInt = " << givenInt << "\n";
    std::cout << "address of givenInt is at &givenInt = " << &givenInt << "\n";

    std::cout << "givenFloat = " << givenFloat << "\n";
    std::cout << "address of givenFloat is at &givenFloat = " << &givenFloat << "\n";

    std::cout << "givenDouble = " << givenDouble << "\n";
    std::cout << "address of givenDouble is at &givenDouble = " << &givenDouble << "\n";

    std::cout << "givenString = " << givenString << "\n";
    std::cout << "address of givenString is at &givenString = " << &givenString << "\n";

    std::cout << "givenChar = " << givenChar << "\n";
    std::cout << "address of a is at &a = " << static_cast<void *>(&givenChar) << "\n";

    return 0;
}