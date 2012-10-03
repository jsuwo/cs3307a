#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Person
{
  public:
    Person(const string& name) : _name(name) { }
    virtual ~Person() { }
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

class Employee : public Person
{
  public:
    Employee(const string& name, const int id) : Person(name), _empID(id) { }
    int id() const { return this->_empID; }

  private:
    int _empID;
};

main()
{
  Person* p1 = new Person("Joe");
  Student* s1 = dynamic_cast<Student*>(p1);

  if (s1 == NULL)
    cout << "NULL!" << endl;
  else
  {
    cout << s1->name() << endl;
    cout << s1->number() << endl;
  }

  Student* s2 = new Student("Joe", "250000000");
  Person* p2 = s2;

  Student* s3 = dynamic_cast<Student*>(p2);

  if (s3 == NULL)
    cout << "NULL!" << endl;
  else
  {
    cout << s3->name() << endl;
    cout << s3->number() << endl;
  }

  Employee* e1 = new Employee("Joe", 1234);
  Student* s4 = dynamic_cast<Student*>(e1);

  if (s4 == NULL)
    cout << "NULL!" << endl;
  else
  {
    cout << s4->name() << endl;
    cout << s4->number() << endl;
  }

}
