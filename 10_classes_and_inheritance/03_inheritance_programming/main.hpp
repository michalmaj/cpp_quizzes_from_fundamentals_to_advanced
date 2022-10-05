#pragma once

#include <iostream>
#include <string>


class Flower
{
private:
    std::string bloomTime;
public:
    Flower();
    void setBloomTime(std::string bloomIn);
    std::string getBloomTime();
};

Flower::Flower()
{
    bloomTime = "NA";
}

void Flower::setBloomTime(std::string bloomIn)
{
    bloomTime = bloomIn;
}

std::string Flower::getBloomTime()
{
    return bloomTime;
}

//TODO: Complete the class called Rose
//It is derived from the class Flower
class Rose : public Flower
{
private:
    std::string fragrance;
public:
    Rose();
    void setFragrance(std::string fragIn);
    std::string getFragrance();
};

Rose::Rose()
{
    fragrance = "NA";
}

void Rose::setFragrance(std::string fragIn)
{
    fragrance = fragIn;
}

std::string Rose::getFragrance()
{
    return fragrance;
}
