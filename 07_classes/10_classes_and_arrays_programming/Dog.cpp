#pragma once

#include <iostream>

class Dog
{
    std::string name;
    int licenseNumber;
public:
    Dog();
    void setName(std::string nameIn);
    void setLicenseNumber(int licenseNumberIn);
    std::string getName();
    int getLicenseNumber();
    void printInfo();
};

inline Dog::Dog()
{
    name = "Unkonw";
}

inline void Dog::setName(std::string nameIn)
{
    name = nameIn;
}

inline void Dog::setLicenseNumber(int licenseNumberIn)
{
    licenseNumber = licenseNumberIn;
}

inline std::string Dog::getName()
{
    return name;
}

inline int Dog::getLicenseNumber()
{
    return licenseNumber;
}

inline void Dog::printInfo()
{
    std::cout << name << " " << licenseNumber;
}