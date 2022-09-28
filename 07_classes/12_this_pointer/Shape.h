#pragma once

class Shape
{
public:
	// Constructor
	Shape(int length=2, int width=2)
		: length{length}, width{width}{}

	// Calculate area of shape
	double Area() const
	{
		return length * width;
	}

	// Compare areas using 'this' keyword
	bool compareWithThis(Shape shape)
	{
		return this->Area() > shape.Area();
	}

	// Keyword 'this' is not necessary to compare shapes
	bool compare(Shape shape)
	{
		return Area() > shape.Area();
	}

private:
	int length;
	int width;
};