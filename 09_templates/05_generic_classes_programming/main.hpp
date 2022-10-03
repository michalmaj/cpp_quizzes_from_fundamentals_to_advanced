#pragma once

#include <iostream>

template<class T>
class Multiplier
{
private:
	T M1;
	T M2;
	T product;

public:
	// Constructor
	Multiplier();
	// Setters
	void setM1(T input);
	void setM2(T input);
	void setProduct();

	// Getters
	T getProduct() const;
	T getM1() const;
	T getM2() const;

	// Other methods
	void printEquation() const;
};

template <class T>
Multiplier<T>::Multiplier()
{
	M1 = 0;
	M2 = 0;
	product = 0;
}


template <class T>
void Multiplier<T>::setM1(T input)
{
	M1 = input;
}

template <class T>
void Multiplier<T>::setM2(T input)
{
	M2 = input;
}

template <class T>
void Multiplier<T>::setProduct()
{
	product = M1 * M2;
}

template <class T>
T Multiplier<T>::getM1() const
{
	return M1;
}

template <class T>
T Multiplier<T>::getM2() const
{
	return M2;
}

template <class T>
T Multiplier<T>::getProduct() const
{
	return product;
}

template <class T>
void Multiplier<T>::printEquation() const
{
	std::cout << M1 << " * " << M2 << " = " << product;
}

