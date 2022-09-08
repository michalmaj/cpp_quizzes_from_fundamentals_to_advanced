/*Enum example*/

#include <iostream>

int main()
{
	// Define MONTHS as having 12 possible values
	enum MONTHS{Jan, Feb, Mar, Apr, May, Jun, jul, Aug, Sep, Oct, Nov, Dec};

	// Define variable bestMonth as a variable type MONTHS
	MONTHS bestMonth;

	// Assign bestMonth one of the value of MONTHS
	bestMonth = Jan;

	// We can check the value of bestMonth
	if (bestMonth == Jan)
		std::cout << "I'm not sure January is the best month\n";

	return 0;
}