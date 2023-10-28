/*
 * Student 클래스의 인터페이스 파일
 */
#ifndef STUDENT_H
#define STUDENT_H
#include "prg11-2.hpp"

class Student: public Person
{
private:
    double gpa;
public:
    Student();
    Student(long identity, double gpa);
    ~Student();
    Student(const Student& student);
    void print() const;
};
#endif
