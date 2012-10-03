#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Student
{
  public:
    Student(string number) : _stNum(number) { }
    const string& number() const { return this->_stNum; }

  private:
    int age;
    string _stNum;
};

class Employee
{
  public:
    Employee(string id) : _empID(id) { }
    const string& id() const { return this->_empID; }

  private:
    string _empID;
};

main()
{
  Student* s = new Student("250000000");
  Employee* e = static_cast<Employee*>(s);

  cout << e->id();
}

