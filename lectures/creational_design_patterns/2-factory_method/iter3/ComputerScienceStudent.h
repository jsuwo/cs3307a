#ifndef COMPUTER_SCIENCE_STUDENT_H
#define COMPUTER_SCIENCE_STUDENT_H

#include <iostream>
#include <string>
#include "Student.h"

class ComputerScienceStudent : public Student
{
  public:
    ComputerScienceStudent(const std::string& name) : Student(name)
    {
    }

    void welcome()
    {
      std::cout << "System.out.println(\"Welcome to CS\");" << std::endl;
    }

    void invoiceTuition()
    {
      std::cout << "Generating invoice for $5500" << std::endl;
    }

    void createTranscript()
    {
      std::cout << "Creating CS transcript" << std::endl;
    }
};

#endif
