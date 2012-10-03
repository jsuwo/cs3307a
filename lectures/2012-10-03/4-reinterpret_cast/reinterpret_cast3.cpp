#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Student
{
  public:
    Student(const string& number) : _stNum(number) { }
    const string& number() const { return this->_stNum; }

  private:
    int _age;
    string _stNum;
};

class Employee
{
  public:
    Employee(const string& id) : _empID(id) { }
    const string& id() const { return this->_empID; }

  private:
    string _empID;
};

main()
{
  Student* s = new Student("250000000");
  Employee* e = reinterpret_cast<Employee*>(s);

  cout << e->id() << endl;;
}

