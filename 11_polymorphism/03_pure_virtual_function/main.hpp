#pragma once


#include<iostream>
#include<string>

class Animal
{
private:
    std::string name;
    float baseRate;
    std::string type;
public:
    Animal(std::string nameIn, float baseRateIn, std::string typeIn);
    //this is our virtual function
    virtual float calcDailyRate() = 0;
    float getBaseRate();
};

Animal::Animal(std::string nameIn, float baseRateIn, std::string typeIn)
{
    name = nameIn;
    baseRate = baseRateIn;
    type = typeIn;
}

float Animal::getBaseRate()
{
    return baseRate;
}

class Cat : public Animal
{
public:
    Cat(std::string nameIn, float baseRateIn, std::string typeIn);
    float calcDailyRate();
};

Cat::Cat(std::string nameIn, float baseRateIn, std::string typeIn)
    :Animal(nameIn, baseRateIn, typeIn)
{
    std::cout << "\nin cat constructor";
}

float Cat::calcDailyRate()
{
    return Animal::getBaseRate() * 1.5;
}

//=============
class Dog : public Animal
{
public:
    Dog(std::string nameIn, float baseRateIn, std::string typeIn);
    float calcDailyRate();
};

Dog::Dog(std::string nameIn, float baseRateIn, std::string typeIn)
    :Animal(nameIn, baseRateIn, typeIn)
{
    std::cout << "\nin dog constructor";
}

float Dog::calcDailyRate()
{
    return Animal::getBaseRate() * 2.0;
}