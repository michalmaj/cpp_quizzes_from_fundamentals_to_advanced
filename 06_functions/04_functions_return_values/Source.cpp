/*
 *Goal: practice returning values from functions
 */

#include<iostream>

float add(float m1, float m2);
float sub(float m1, float m2);
float mult(float m1, float m2);
float div(float m1, float m2);

int main()
{
    float m1 = 4.0;
    float m2 = 3.5;
    float answer;

    answer = add(m1, m2);
    std::cout << m1 << "+" << m2 << " = " << answer << "\n";

    std::cout << m1 << "-" << m2 << " = " << sub(m1, m2) << "\n";
    std::cout << m1 << "*" << m2 << " = " << mult(m1, m2) << "\n";
    std::cout << m1 << "/" << m2 << " = " << div(m1, m2) << "\n";
    return 0;
}

float add(float m1, float m2)
{
    return m1 + m2;
}

float sub(float m1, float m2)
{
    return m1 - m2;
}

float mult(float m1, float m2)
{
    return m1 * m2;
}

float div(float m1, float m2)
{
    return m1 / m2;
}