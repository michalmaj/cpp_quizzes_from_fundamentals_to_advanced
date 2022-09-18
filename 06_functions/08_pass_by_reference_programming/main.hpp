#pragma once

#include <iostream>

void calculate(float& input1, float& input2, char& operation, float& result)
{
	switch(operation)
	{
	case '+':
		result = input1 + input2;
		break;
	case '-':
		result = input1 - input2;
		break;
	case '*':
		result = input1 * input2;
		break;
	case '/':
		result = input1 / input2;
		break;
	default:
		std::cout << "Unknown operations!\n";
		break;
	}
}

void printEquation(float& input1, float& input2, char& operation, float& result)
{
	std::cout << input1 << " " << operation << " " << input2 << " = " << result;
}