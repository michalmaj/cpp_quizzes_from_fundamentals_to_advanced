/*Formatting Output
 ***Goal: practice using cout to format output to console
 ***Print the variables in three columns:
 ***Ints, Floats, Doubles
 */

#include <iostream>
#include <iomanip>


int main()
{
	int a = 45;
	float b = 45.323;
	double c = 45.5468;
	int aa = a + 9;
	float bb = b + 9;
	double cc = c + 9;
	int aaa = aa + 9;
	float bbb = bb + 9;
	double ccc = cc + 9;

	const int COL_WID{ 10 };

	std::cout << std::setw(COL_WID) << "Ints" << std::setw(COL_WID) << "Floats"
		<< std::setw(COL_WID) << "Doubles\n";
	std::cout << std::setw(COL_WID) << a << std::setw(COL_WID) << b
		<< std::setw(COL_WID) << c << std::endl;
	std::cout << std::setw(COL_WID) << aa << std::setw(COL_WID) << bb
		<< std::setw(COL_WID) << cc << std::endl;
	std::cout << std::setw(COL_WID) << aaa << std::setw(COL_WID) << bbb
		<< std::setw(COL_WID) << ccc << std::endl;


	return 0;
}