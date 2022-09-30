#pragma once

#include<iostream>


class Compare
{
public:
    int findSmaller(int input1, int input2);
    float findSmaller(float input1, float input2);
    char findSmaller(char input1, char input2);

    int findSmaller(int input1, int input2, int input3);
    float findSmaller(float input1, float input2, float input3);
    char findSmaller(char input1, char input2, char input3);

    int findSmaller(int* arr, int n);
    float findSmaller(float* arr, int n);
    char findSmaller(char* arr, int n);
};

inline int Compare::findSmaller(int input1, int input2)
{
    if (input1 < input2)
        return input1;
    return input2;
}
inline float Compare::findSmaller(float input1, float input2)
{
    if (input1 < input2)
        return input1;
    return input2;
}

inline char Compare::findSmaller(char input1, char input2)
{
    if (input1 < input2)
        return input1;
    return input2;
}

inline int Compare::findSmaller(int input1, int input2, int input3)
{
    auto tmp = findSmaller(input1, input2);
    if (tmp < input3)
        return tmp;
    return input3;
}

inline float Compare::findSmaller(float input1, float input2, float input3)
{
    auto tmp = findSmaller(input1, input2);
    if (tmp < input3)
        return tmp;
    return input3;
}

inline char Compare::findSmaller(char input1, char input2, char input3)
{
    auto tmp = findSmaller(input1, input2);
    if (tmp < input3)
        return tmp;
    return input3;
}

inline int Compare::findSmaller(int* arr, int n)
{
    auto smaller{ arr[0] };
    for(int i{1}; i < n; ++i)
    {
        if (arr[i] < smaller)
            smaller = arr[i];
    }

    return smaller;
}

inline float Compare::findSmaller(float* arr, int n)
{
    auto smaller{ arr[0] };
    for (int i{ 1 }; i < n; ++i)
    {
        if (arr[i] < smaller)
            smaller = arr[i];
    }

    return smaller;
}

inline char Compare::findSmaller(char* arr, int n)
{
    auto smaller{ arr[0] };
    for (int i{ 1 }; i < n; ++i)
    {
        if (arr[i] < smaller)
            smaller = arr[i];
    }

    return smaller;
}


