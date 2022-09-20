#pragma once

#include <iostream>

class Cat
{
	std::string name;
	std::string breed;
	int age;

public:
	void setName(std::string name);
	void setBreed(std::string breed);
	void setAge(int age);

	std::string getName() const;
	std::string getBreed() const;
	int getAge() const;
	void printInfo() const;
};



void Cat::setName(std::string name)
{
	this->name = name;
}

void Cat::setBreed(std::string breed)
{
	this->breed = breed;
}

void Cat::setAge(int age)
{
	this->age = age;
}

std::string Cat::getName() const
{
	return name;
}
std::string Cat::getBreed() const
{
	return breed;
}
int Cat::getAge() const
{
	return age;
}
void Cat::printInfo() const
{
	std::cout << name << " " << breed << " " << age << std::endl;
}