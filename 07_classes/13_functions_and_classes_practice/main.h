#pragma once


class Student
{
    int studentID;
    int grades[10];

public:
    Student(int classSize = 10);
    void setStudentID(int studentNumber);
    void setGrade(int gradeNumber, int gradeIn);
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






//********************
class CourseEnrollment
{
public:
    Student students[6];
    int courseMinGrade;
    int courseMaxGrade;
    float courseAvgGrade;
    int grades[60];
};