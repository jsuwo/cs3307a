#ifndef ENGINEERING_REGISTRAR
#define ENGINEERING_REGISTRAR

#include <string>
#include "EngineeringStudent.h"

class EngineeringRegistrar : public Registrar
{
  public:
    virtual Student* createStudent(const std::string& name)
    {
      return new EngineeringStudent(name);
    }
};

#endif

