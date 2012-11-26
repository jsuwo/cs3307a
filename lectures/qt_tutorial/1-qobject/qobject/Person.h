#include <iostream>
#include <string>
#include <QObject>

class Person : public QObject
{
  public:
    Person(const std::string name, QObject* parent = NULL) : 
      QObject(parent), _name(name)
    {
    }

    virtual ~Person()
    {
      std::cout << "In destructor for Person " << _name << std::endl;
    }

  private:
    std::string _name;
};
