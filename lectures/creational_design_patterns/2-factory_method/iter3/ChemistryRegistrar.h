#ifndef CHEMISTRY_REGISTRAR
#define CHEMISTRY_REGISTRAR

#include <string>
#include "ChemistryStudent.h"

class ChemistryRegistrar : public Registrar
{
  public:
    virtual Student* createStudent(const std::string& name)
    {
      return new ChemistryStudent(name);
    }
};

#endif

