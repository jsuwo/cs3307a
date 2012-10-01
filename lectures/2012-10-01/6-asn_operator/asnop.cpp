#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Person
{
  public:
    Person()
    {
      cout << "In Person default constructor" << endl;
    }

    Person(const string& name) : _name(name)
    {
      cout << "In Person(name) constructor" << endl;
    }

    Person(const Person& other) : _name(other._name)
    {
      cout << "In Person copy constructor" << endl;
    }

    Person& operator=(const Person& other)
    {
      cout << "In Person assignment operator" << endl;

      if (this != &other)
        this->_name = other._name;  

      return *this;
    }

  private:
    string _name;
};

class Student : public Person
{
  public:
    Student(const string& name, const string& number) : Person(name), _number(number)
    {
      cout << "In Student constructor" << endl;
    }

    Student(const Student& other) : Person(other), _number(other._number)
    {
      cout << "In Student copy constructor" << endl;
    }

    Student& operator=(const Student& other)
    {
      cout << "In Student assignment operator" << endl;

      if (this != &other)
      {
        Person::operator=(other);
        this->_number = other._number;
      }

      return *this;
    }

  private:
    string _number;
};

main()
{
  cout << "Creating students" << endl;
  Student s1("Joe","250000000");
  Student s2("Jen","250000001");

  cout << endl << "Copying student" << endl;
  s2 = s1;
}
