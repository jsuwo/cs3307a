#ifndef PET_H
#define PET_H

#include <string>

class Pet
{
  public:
    Pet();
    Pet(std::string name);
    Pet(const Pet& other);
    Pet& operator=(const Pet& other);


  private:
    std::string _name;
};

#endif
