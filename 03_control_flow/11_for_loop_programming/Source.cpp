/*
 **Write a program that asks a user for five numbers.
 **Print out the sum and average of the five numbers.
 */

#include <iostream>

int main()
{
	int sum{ 0 };
	const int NUMBERS{ 5 };

	for(int i{0}; i < NUMBERS; ++i)
	{
		int num;
		std::cout << "Enter " << i + 1 << " number: ";
		std::cin >> num;
		sum += num;
	}
	std::cout << "sum: " << sum << ", average: "
		<< (sum / static_cast<float>(NUMBERS)) << std::endl;

	return 0;
}