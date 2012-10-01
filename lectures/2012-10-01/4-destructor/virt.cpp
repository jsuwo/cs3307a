#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Person
{
  public:
    Person(const string& name)
    {
      this->_name = new string(name);
    }

    virtual ~Person()
    {
      cout << "In Person destructor" << endl;
      delete this->_name;
    }

  private:
    string* _name;
};

class Student : public Person
{
  public:
    Student(const string& name, const string& number) : Person(name)
    {
      this->_number = new string(number);
    }

    virtual ~Student()
    {
      cout << "In Student destructor" << endl;
      delete this->_number;
    }

  private:
    string* _number;
};

main()
{
  Student* s = new Student("Joe","250000000");
  Person* p = s;

  delete p;
}
