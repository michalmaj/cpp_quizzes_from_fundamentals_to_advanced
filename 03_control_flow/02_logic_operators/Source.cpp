/*
 * There are three logic operators in C++:
 *	- and
 *	- or
 *	- not
 *
 * There are two Boolean values:
 *  - true = 1
 *	- false = 0
 *
 *	Assume A=1, B=1, C=0, D=0
 *	Operator		Behavior											Example
 *	&& (and)		If both inputs are non-zero the outcome				A && B = 1
 *					of the operation is true							A and C = 0
 *
 *	|| (or)			If at least one input is non-zero, the				A || B = 1
 *					outcome of the operation is true					C or D = 0
 *
 *	! (not)			Negates the logical condition						!(A&&B) = 0
 *																		!(C||D) = 1
 */

#include<iostream>
#include<string>

int main()
{
    int A = 5;
    int B = 4;
    int C = 5;
    int D = 0;

    std::string TorF[] = { "False", "True" };

    //The && operator
    std::cout << "A == C is " << TorF[A == C];
    std::cout << "\n(B == D) is " << TorF[B == D];
    std::cout << "\n(B > D) is " << TorF[B > D];
    //A true && false = false
    std::cout << "\n\n(A ==C) && (B == D) is " << TorF[(A == C) && (B == D)];
    //A true and true = true
    std::cout << "\n(A ==C) && (B > D) is " << TorF[(A == C) && (B > D)];

    //The || operator
    //A true || false = true
    std::cout << "\n\n(A ==C) || (B == D) is " << TorF[(A == C) || (B == D)];
    //A true || true = true
    std::cout << "\n(A ==C) || (B > D) is " << TorF[(A == C) || (B > D)];

    //The 'Not' operator
    std::cout << "\n\nA < B is " << TorF[A < B];
    std::cout << "\n!(A < B) is " << TorF[!(A < B)];

    std::cout << "\n\nA == C is " << TorF[A == C];
    std::cout << "\n!(A == C) is " << TorF[!(A == C)];

    std::cout << std::endl;

    return 0;
}