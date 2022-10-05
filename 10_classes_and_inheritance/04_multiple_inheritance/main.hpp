#pragma once

#include<string>
#include <iostream>


class Staff
{
private:
    std::string title;
public:
    Staff();
    void setTitle(std::string input);
    std::string getTitle();
};

Staff::Staff()
{
    title = "NA";
}

void Staff::setTitle(std::string input)
{
    title = input;
}

std::string Staff::getTitle()
{
    return title;
}

class GradStudent
{
private:
    int studentId;
public:
    GradStudent();
    void setId(int input);
    int getId();

};

GradStudent::GradStudent()
{
    studentId = 000000;
}

void GradStudent::setId(int input)
{
    studentId = input;
}

int GradStudent::getId()
{
    return studentId;
}

class TA : public Staff, public GradStudent
{
private:
    std::string supervisor;
public:
    TA();
    void setSupervisor(std::string input);
    std::string getSupervisor();
};

TA::TA()
{
    supervisor = "NA";
}

void TA::setSupervisor(std::string input)
{
    supervisor = input;
}

std::string TA::getSupervisor()
{
    return supervisor;
}
