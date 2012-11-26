#ifndef CHEMISTRY_STUDENT_H
#define CHEMISTRY_STUDENT_H

#include <iostream>
#include <string>
#include "Student.h"

class ChemistryStudent : public Student
{
  public:
    ChemistryStudent(const std::string& name) : Student(name)
    {
    }

    void welcome()
    {
      std::cout << "If you're not part of the solution, you're part of the precipitate!" << std::endl;
    }

    void invoiceTuition()
    {
      std::cout << "Generating invoice for $5700" << std::endl;
    }

    void createTranscript()
    {
      std::cout << "Creating Chemistry transcript" << std::endl;
    }
};

#endif
