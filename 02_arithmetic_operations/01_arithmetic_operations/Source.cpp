/*
 *Goal: practice arithmetic operations in C++
 **Write a program that calculates the volumes of:
 **a cube, sphere, cone.
 **Cube Volume = side^3
 **Sphere Volume = (4/3) * pi * radius^3
 **Cone Volume = pi * radius^2 * (height/3)
 **Write the values to the console.
 */

#include <iostream>
#include <cmath>
#include <numbers>

int main()
{
    //Dimension of the cube
    float cubeSide = 5.4;
    //Dimension of sphere
    float sphereRadius = 2.33;
    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;

    float volCube, volSphere, volCone = 0;

    volCube = std::powf(cubeSide, 3);
    std::cout << "Cube volume: " << volCube << std::endl;

    volSphere = (4 / 3.0) * std::numbers::pi * std::powf(sphereRadius, 3);
    std::cout << "Sphere volume: " << volSphere << std::endl;

    volCone = std::numbers::pi * powf(coneRadius, 2) * (coneHeight / 3.0);
    std::cout << "Cone volume: " << volCone << std::endl;



    return 0;
}