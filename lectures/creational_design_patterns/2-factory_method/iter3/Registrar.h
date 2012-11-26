#ifndef REGISTRAR_H
#define REGISTRAR_H

#include <string>
#include "Student.h"

class Registrar
{
  public:
    void admitStudent(const std::string& name);
  
  protected:
    virtual Student* createStudent(const std::string& name) = 0;
};

#endif
