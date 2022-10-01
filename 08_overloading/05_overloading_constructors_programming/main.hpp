#pragma once

#include<iostream>
#include<string>


class Dog
{
private:
	std::string name;
	int license;

public:
	Dog();
	Dog(std::string nameIn);
	Dog(int licenseIn);
	Dog(std::string nameIn, int licenseIn);

	std::string getName();
	int getLicense();
};

inline Dog::Dog()
{
	name = "NA";
	license = 0;
}

inline Dog::Dog(std::string nameIn)
	: name{nameIn}
{
	license = 0;
}

inline Dog::Dog(int licenseIn)
	: license{licenseIn}
{
	name = "NA";
}

inline Dog::Dog(std::string nameIn, int licenseIn)
	: name{nameIn}, license{licenseIn}
{}

inline std::string Dog::getName()
{
	return name;
}

inline int Dog::getLicense()
{
	return license;
}



