#ifndef MATH_STUDENT_H
#define MATH_STUDENT_H

#include <iostream>
#include <string>
#include "Student.h"

class MathStudent : public Student
{
  public:
    MathStudent(const std::string& name) : Student(name)
    {
    }

    void welcome()
    {
      std::cout << "Sine sine cosine sine, 3.14159, go math!" << std::endl;
    }

    void invoiceTuition()
    {
      std::cout << "Generating invoice for $5800" << std::endl;
    }

    void createTranscript()
    {
      std::cout << "Creating Math transcript" << std::endl;
    }
};

#endif
