#pragma once

#include <algorithm>
#include <numeric>

class Student
{
    int studentID;
    int grades[10];

public:
    Student(int classSize = 10);
    void setStudentID(int studentNumber);
    void setGrade(int gradeNumber, int gradeIn);
    void printGrades();
    int getMin();
    int getMax();
    void sortGrades();
    double getAverageGrade();
    int getGrade(int i);
};

inline Student::Student(int classSize)
{
    grades[classSize];
}


inline void Student::setStudentID(int studentNumber)
{
    studentID = studentNumber;
}

inline void Student::setGrade(int gradeNumber, int gradeIn)
{
    grades[gradeNumber] = gradeIn;
}

inline void Student::printGrades()
{
    std::cout << "Student ID = " << studentID << std::endl;
    for (int i{ 0 }; i < std::size(grades); ++i)
        std::cout << grades[i] << std::endl;
}

inline void Student::sortGrades()
{
    std::sort(std::begin(grades), std::end(grades), std::greater<int>());
}

inline int Student::getMin()
{
    sortGrades();
    return grades[9];
}

inline int Student::getMax()
{
    sortGrades();
    return grades[0];
}

inline double Student::getAverageGrade()
{
    return (std::accumulate(std::begin(grades), std::end(grades), 0) / 10.0);
}

inline int Student::getGrade(int i)
{
    return grades[i];
}



//********************
class CourseEnrollment
{
public:
    Student students[6];
    int courseMinGrade;
    int courseMaxGrade;
    float courseAvgGrade;
    int grades[60];
    void addStudents(Student*);

    int* getAllGrades()
    {
        //int grades[60];
        int k = 0;
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                grades[k] = students[i].getGrade(j);
                k = k + 1;
            }
        }
        return grades;
    }

    int* sortAllGrades()
    {
        for (int i = 0; i < 60; i++)
        {
            for (int j = 0; j < 59 - i; j++)
            {
                if (grades[j] > grades[j + 1])
                {
                    int temp;
                    temp = grades[j];
                    grades[j] = grades[j + 1];
                    grades[j + 1] = temp;
                }
            }
        }
        return grades;
    }


    int getMinGrade()
    {
        sortAllGrades();
        return grades[0];
    }
    int getMaxGrade()
    {
        sortAllGrades();
        return grades[59];
    }

    float getAvgGrade()
    {
        int sum = 0;
        for (int i = 0; i < 60; i++)
        {
            sum = sum + grades[i];
        }
        return sum / 60;
    }

    void printAllGrades()
    {
        for (int i = 0; i < 60; i++)
        {
            std::cout << "grade=" << grades[i] << "\n";
        }
    }
};


inline void CourseEnrollment::addStudents(Student* student)
{
    for (int i{ 0 }; i < 6; ++i)
        students[i] = student[i];
}


