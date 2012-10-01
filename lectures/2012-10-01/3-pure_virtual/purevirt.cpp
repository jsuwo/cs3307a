#include <iostream>

using std::cout;
using std::endl;

class Person
{
  public:
    virtual void sayHello() = 0;
};

class Employee : public Person
{
};

class Student : public Person
{
  public:
    virtual void sayHello()
    {
      cout << "I am a Student" << endl;
    }
};

main()
{
  Person* p = new Person();     // error
  Employee* e = new Employee(); // error
  Student* s = new Student();   // ok
}
