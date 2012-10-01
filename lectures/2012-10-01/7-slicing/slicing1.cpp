#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Person
{
  public:
    Person(const string& name) : _name(name)
    {
      cout << "In Person constructor" << endl;
    }

    Person(const Person& other) : _name(other._name)
    {
      cout << "In Person copy constructor" << endl;
    }

    Person& operator=(const Person& other)
    {
      cout << "In Person assignment operator" << endl;

      if (this != &other)
      {
        this->_name = other._name;
      }

      return *this;
    }

    const string& name() const { return this->_name; } 

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

    const string& number() const { return this->_number; } 

  private:
    string _number;
};

void printStudent(Student& student)
{
  cout << student.name() << endl;
  cout << student.number() << endl;
}

main()
{
  cout << "Creating student" << endl;
  Student s = Student("Joe", "250000000");
  Person p = s;

  cout << endl << "Printing Student" << endl;
  printStudent(s);

  cout << endl << "Printing Person cast to Student" << endl;
  printStudent((Student&)p);
}
