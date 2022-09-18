/*
 * For this program, write two functions:
 *	- void printEquation(int m1, int m2, int sum, char operation);
 *	- int sum(int m1, int m2);
 */

#include "main.hpp"

int main()
{
	int m1{76};
	int m2{39};
	int result{0};
	char operation{'+'};

	result = sum(m1, m2);

	printEquation(m1, m2, result, operation);

	return 0;
}