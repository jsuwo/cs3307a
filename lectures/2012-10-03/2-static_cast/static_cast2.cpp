#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Person
{
  public:
    Person(const string& name) : _name(name) { }
    const string& name() const { return _name; }

  private:
    string _name;
};

class Student : public Person
{
  public:
    Student(const string& name, const string& num) : Person(name), _number(num) { }
    const string& number() const { return _number; }

  private:
    string _number;
};

main()
{
  Person* p = new Person("Joe");
  Student* s = static_cast<Student*>(p);

  cout << s->name() << endl;
  cout << s->number() << endl;
}
