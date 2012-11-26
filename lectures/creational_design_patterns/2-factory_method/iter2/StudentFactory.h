#ifndef STUDENT_FACTORY_H
#define STUDENT_FACTORY_H

#include <string>
#include "Student.h"

class StudentFactory
{
  public:
    Student* createStudent(const std::string& name, const std::string& dept);
};

#endif

