#pragma once

#include<iostream>
#include<string>


//The base class
class Student
{
private:
    int id;
public:
    void setId(int idIn);
    int getId();
    Student();
    void setId();
};

Student::Student()
{
    id = 000000000;
}

void Student::setId(int idIn)
{

    id = idIn;
}

int Student::getId()
{
    return id;
}

//The derived class with Student as base class
class GradStudent : private Student
{
private:
    std::string degree;
public:
    GradStudent();
    void setDegree(std::string degreeIn);
    std::string getDegree();
    void setStudentId(int idIn);
    int getStudentId();
};

GradStudent::GradStudent()
{
    degree = "undelcared";
}

int GradStudent::getStudentId()
{
    return Student::getId();
}
void GradStudent::setStudentId(int idIn)
{
    Student::setId(idIn);
}
void GradStudent::setDegree(std::string degreeIn)
{
    degree = degreeIn;
}
std::string GradStudent::getDegree()
{
    return degree;
}