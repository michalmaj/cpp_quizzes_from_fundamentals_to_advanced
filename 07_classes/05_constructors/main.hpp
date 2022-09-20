#pragma once

#include <iostream>

class Cats
{
	std::string name;
	std::string breed;
	int age;

public:
	Cats();

	void setName(std::string name);
	void setBreed(std::string breed);
	void setAge(int age);

	std::string getName() const;
	std::string getBreed() const;
	int getAge() const;
	void printInfo() const;
};

Cats::Cats()
{
	std::cout << "Assigning inital values in the constructor\n";
	name = "Unknown";
	breed = "Unknown"; //the initial value of the breed
	age = 99; //the initial value of the age	
}


void Cats::setName(std::string name)
{
	this->name = name;
}

void Cats::setBreed(std::string breed)
{
	this->breed = breed;
}

void Cats::setAge(int age)
{
	this->age = age;
}

std::string Cats::getName() const
{
	return name;
}
std::string Cats::getBreed() const
{
	return breed;
}
int Cats::getAge() const
{
	return age;
}
void Cats::printInfo() const
{
	std::cout << name << " " << breed << " " << age << std::endl;
}