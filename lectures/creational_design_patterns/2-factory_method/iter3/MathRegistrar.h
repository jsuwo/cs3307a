#ifndef MATH_REGISTRAR
#define MATH_REGISTRAR

#include <string>
#include "MathStudent.h"

class MathRegistrar : public Registrar
{
  public:
    virtual Student* createStudent(const std::string& name)
    {
      return new MathStudent(name);
    }
};

#endif

