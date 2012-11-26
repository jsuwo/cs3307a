#ifndef ENGINEERING_STUDENT_H
#define ENGINEERING_STUDENT_H

#include <iostream>
#include <string>
#include "Student.h"

class EngineeringStudent : public Student
{
  public:
    EngineeringStudent(const std::string& name) : Student(name)
    {
    }

    void welcome()
    {
      std::cout << "Real engineers rotate their tires for laughs." << std::endl;
    }

    void invoiceTuition()
    {
      std::cout << "Generating invoice for $6000" << std::endl;
    }

    void createTranscript()
    {
      std::cout << "Creating Engineering transcript" << std::endl;
    }
};

#endif
