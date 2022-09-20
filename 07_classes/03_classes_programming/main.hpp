#pragma once

#include<iostream>


class Dog
{
    std::string name;
    int licenseNumber;
public:
    void setName(std::string nameIn);
    void setLicenseNumber(int licenseNumberIn);
    std::string getName();
    int getLicenseNumber();
    void printInfo();
};

void Dog::setName(std::string nameIn)
{
    //ToDo: finish this function
    name = nameIn;
}

void Dog::setLicenseNumber(int licenseNumberIn)
{
    //ToDo: finish this function
    licenseNumber = licenseNumberIn;
}

std::string Dog::getName()
{
    //ToDo: finish this function
    return name;
    
}

int Dog::getLicenseNumber()
{
    //ToDo: finish this function
    return licenseNumber;
}

void Dog::printInfo()
{
    //ToDo: finish this function
    std::cout << "Name: " << name << ", the license #" << licenseNumber << std::endl;
}


