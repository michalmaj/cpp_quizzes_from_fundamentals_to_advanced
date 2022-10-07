#pragma once

#include <iostream>
#include <vector>

void printVector(std::vector<int> vIn);
void assignFunction(std::vector<int> vInts, int in);
void pushBackFunction(std::vector<int> vInts, int in);
void emplaceFunction(std::vector<int> vInts, int loc, int in);

void printVector(std::vector<int> vIn)
{//printing the contents of vIns
 //TODO: Finish the function
    for (const auto& e : vIn)
        std::cout << e << " ";
    std::cout << std::endl;
}

void assignFunction(std::vector<int> vInts, int in)
{
    std::cout << "\nassigning " << in << " and printing the vector\n";
    //TODO: Finish the function
    vInts.assign(1, in);
    printVector(vInts);
}
void pushBackFunction(std::vector<int> vInts, int in)
{
    std::cout << "\npush back " << in << " and printing the vector\n";
    //TODO: Finish the function
    vInts.push_back(in);
    printVector(vInts);
}
void emplaceFunction(std::vector<int> vInts, int loc, int in)
{
    std::vector<int>::iterator it = vInts.begin();
    std::cout << "\nemplacing " << in << " and printing the vector\n";
    //TODO: Finish the function
    vInts.emplace(it + loc, in);
    printVector(vInts);
}
