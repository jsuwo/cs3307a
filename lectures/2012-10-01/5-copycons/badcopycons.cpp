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

    Student(const Student& other) : _number(other._number)
    {
      cout << "In Student copy constructor" << endl;
    }

  private:
    string _number;
};

main()
{
  cout << "Creating student" << endl;
  Student s("Joe","250000000");

  cout << endl << "Copying student" << endl;
  Student s2(s);
}
