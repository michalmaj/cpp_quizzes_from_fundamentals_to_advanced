#pragma once


// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>


void printVector(std::vector<float> vIn);

void printVector(std::vector<float> vIn)
{//printing the contents of vIns
   //TODO: Complete the function 
	std::vector<float>::iterator it;

	for(it = vIn.begin(); it != vIn.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
}
