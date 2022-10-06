

#include "main.hpp"

int main()
{
    Cat c1("polly", 20.0, "cat");
    Dog d1("spot", 30.0, "dog");

    std::cout << "\nPolly Rate: $" << c1.calcDailyRate();
    std::cout << "\nSpot Rate: $" << d1.calcDailyRate();

    return 0;
}