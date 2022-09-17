/*
 **Find the min and max and average of 15 numbers that a user will input.
 **The numbers range from 0 to 100.
 **We will do it now for practice and again later when we learn arrays and
 **functions. So you do not have to keep all fifteen numbers stored in memory.
 */

#include <iostream>


int main()
{
	int min{ 100 };
	int max{ -1 };
	int sum{ 0 };
	const int how_many{ 15 };

	std::cout << "Enter " << how_many << " numbers in range [0-100]" << std::endl;
	int i{ 0 };
	while(i != 15)
	{
		int num;
		std::cout << "Enter " << i << " number: ";
		std::cin >> num;
		if(num < 0 or num > 100)
		{
			std::cout << "Number out of range\n";
			continue;
		}
		if (num < min)
			min = num;
		if (num > max)
			max = num;

		sum += num;
		++i;
	}

	std::cout << "min: " << min << ", max: " << max << ", average: "
		<< (sum / static_cast<double>(how_many)) << std::endl;

	return 0;
}