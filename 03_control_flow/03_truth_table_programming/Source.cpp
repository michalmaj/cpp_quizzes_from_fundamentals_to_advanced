/*
 *Goal: use logical and relational operators in a C++ program.
 **Find all possible outputs for the given expression
 **Hint: there are three inputs, so there are 8 possible input combinations (2^3)
 **Which means there is an output for each combination of inputs.
 **The expression: (A and B and C) or (A and( (not B) or (not C))) = Q
 */

#include<iostream>


int main()
{
    //(A and B and C) or (A and( (not B) or (not C))) = Q

    bool Q;
    bool A{ false };
    bool B{ false };
    bool C{ false };

    

    //Use this output format
    std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";

    // All false
    Q = (A and B and C) or (A and (not B) or (not C));
    std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t"
		<< (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    // C true
    C = true;
    Q = (A and B and C) or (A and (not B) or (not C));
    std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t"
		<< (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    // B true
    C = false;
    B = true;
    Q = (A and B and C) or (A and (not B) or (not C));
    std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t"
		<< (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    // A true
    B = false;
    A = true;
    Q = (A and B and C) or (A and (not B) or (not C));
    std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t"
		<< (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    // C and B true
    C = true;
    B = true;
    A = false;
    Q = (A and B and C) or (A and (not B) or (not C));
    std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t"
		<< (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    // C and A true
	C = true;
    B = false;
    A = true;
    Q = (A and B and C) or (A and (not B) or (not C));
    std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t"
        << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    // B and A true
    C = false;
    B = true;
    A = true;
    Q = (A and B and C) or (A and (not B) or (not C));
    std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t"
        << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    // all true
    C = true;
    B = true;
    A = true;
    Q = (A and B and C) or (A and (not B) or (not C));
    std::cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t"
        << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";
	return 0;
}