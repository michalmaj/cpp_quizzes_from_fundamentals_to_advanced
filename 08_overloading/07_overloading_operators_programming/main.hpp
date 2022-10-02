#pragma once

#include <iostream>


//TODO: Add all necessary functions and 
//Overload the '+' sign 
//To achieve the required total

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

    int getWidth()
    {
        return width;
    }

    int getLength()
    {
        return length;
    }

    int operator +(Shape shapeIn)
    {
        return ((width + shapeIn.getWidth()) * (length + shapeIn.getLength()));
    }
};