#include <iostream>
#include <string>

class Person
{
  public:
    Person(const std::string name) : _name(name)
    {
    }

    virtual ~Person()
    {
      std::cout << "In destructor for Person " << _name << std::endl;
    }

  private:
    std::string _name;
};
