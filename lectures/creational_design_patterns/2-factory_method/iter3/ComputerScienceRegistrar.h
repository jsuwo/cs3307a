#ifndef COMPUTER_SCIENCE_REGISTRAR
#define COMPUTER_SCIENCE_REGISTRAR

#include <string>
#include "ComputerScienceStudent.h"

class ComputerScienceRegistrar : public Registrar
{
  public:
    virtual Student* createStudent(const std::string& name)
    {
      return new ComputerScienceStudent(name);
    }
};

#endif

