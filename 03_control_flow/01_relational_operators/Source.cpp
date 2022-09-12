/*
 * Relational operators:
 *	Operator		Example			True Condition			  False Condition
 *	   ==			 A==B		  A equals B				  A is not equal to B
*	   !=			 A!=B		  A is not equal to B		  A equals to B
*	   >			 A>B		  A i greater than B		  A is not greater than B
*	   <			 A<B		  A is less than B			  A is not less than B
*	   >=			 A>=B		  A is greater than or		  A  is less than B
*								  equal to B
*	   <=			 A<=B		  A is less than or			  A is greater than B
*								  equal to B
 */

#include<iostream>
#include<string>


int main()
{
	//instead of printing 0 and 1, create an array where //0 = False, 1 = True
	std::string TorF[] = {"False", "True"};

	int a = 100;
	int b = 33;
	int c = 33;

	//Print out the string values of each relational operation
	std::cout<<"a < b is "<<TorF[a<b];
	std::cout<<"\na > b is "<<TorF[a>b];
	std::cout<<"\na != b is "<<TorF[a!=b];
	std::cout<<"\nc >= b is "<<TorF[c>=b];
	std::cout<<"\nc <= b is "<<TorF[c<=b];
	return 0;
}