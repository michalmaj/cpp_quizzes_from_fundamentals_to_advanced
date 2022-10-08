#include <iostream>

int Factorial(int n)
{
    int res{ 1 };
	while(n > 0)
	{
        res *= n;
        n--;
	}
    return res;
}

int main() {
    // feel free to change this test case!
    int value = Factorial(6);
    std::cout << "6! should equal 720. Your Factorial method returned:"
        << std::endl;
    std::cout << value << std::endl;
}