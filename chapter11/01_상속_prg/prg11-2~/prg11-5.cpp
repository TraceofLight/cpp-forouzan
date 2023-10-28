/*
 * Student 클래스의 구현 파일
 */
#include "prg11-4.hpp"

// 기본 생성자
Student::Student()
: Person(), gpa(0.0)
{
}
// 매개변수가 있는 생성자
Student::Student(long id, double gp)
: Person(id), gpa(gp)
{
    assert(0.0 <= gpa && gpa <= 4.0);
}
// 복사 생성자
Student::Student(const Student& student)
: Person(student), gpa(student.gpa)
{
}
// 소멸자
Student::~Student()
{
}
void Student::print() const
{
    Person::print();
    cout << "GPA: " << fixed << setprecision(2) << gpa << endl;
}
