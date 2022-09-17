/*
 **Goal: practice using multidimensional arrays.
 **Write a program that will accept values for a 4x4 array
 **and a vector of size 4.
 **Use the dot product to multiply the array by the vector.
 **Print the resulting vector.
 */

#include <iostream>

int main()
{
	// Our matrix (4x4)
	int mat[4][4]
	{
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16},
	};

	// Our vector (4x1)
	int vec[4]{ 2, 2, 2, 2 };

	// Output vector
	int output[4]{0};

	for(int i{0}; i < 4; ++i)
	{
		for (int j{ 0 }; j < 4; ++j)
			output[i] += mat[i][j] * vec[i];
	}

	for (const auto& e : output)
		std::cout << e << " ";
	std::cout << std::endl;



	return 0;
}