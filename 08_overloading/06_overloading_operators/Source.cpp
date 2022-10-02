/*
 * We can overload operators in C++. This is useful when using user defined objects.
 *
 * For example we can add two shapes.
 */

#include <iostream>


class Shape
{
private:
    int length;     // Length of a box
    int width;

public:
    // Constructor definition
    Shape(int l = 2, int w = 2)
    {
        length = l;
        width = w;
    }

    double Area()
    {
        return length * width;
    }

    int operator + (Shape shapeIn)
    {
        return Area() + shapeIn.Area();
    }
};

int main(void)
{
    Shape sh1(4, 4);    // Declare shape1
    Shape sh2(2, 6);    // Declare shape2

    int total = sh1 + sh2;
    std::cout << "\nsh1.Area() = " << sh1.Area();
    std::cout << "\nsh2.Area() = " << sh2.Area();
    std::cout << "\nTotal = " << total;
    return 0;
}