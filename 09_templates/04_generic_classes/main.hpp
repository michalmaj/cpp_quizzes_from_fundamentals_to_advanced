#pragma once

#include<iostream>


//tell compiler this class uses a generic value
template <class T>
class StudentRecord
{
private:
    const int size = 5;
    T grade;
    int studentId;
public:
    StudentRecord(T input);
    void setId(int idIn);
    void printGrades();
};

template<class T>
StudentRecord<T>::StudentRecord(T input)
{
    grade = input;
}

template<class T>
void StudentRecord<T>::setId(int idIn)
{
    studentId = idIn;
}

template<class T>
void StudentRecord<T>::printGrades()
{
    std::cout << "ID# " << studentId << ": ";
    std::cout << grade << "\n ";
    std::cout << "\n";
}