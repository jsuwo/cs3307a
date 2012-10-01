#include <iostream>

using std::cout;
using std::endl;

class Person
{
  public:
    void sayHello()
    {
      cout << "I am a Person" << endl;
    }
};

class Student : public Person
{
  public:
    void sayHello()
    {
      cout << "I am a Student" << endl;
    }
};

main()
{
  Person* p;
  Student* s = new Student();

  s->sayHello();

  p = s;
  p->sayHello();
}
