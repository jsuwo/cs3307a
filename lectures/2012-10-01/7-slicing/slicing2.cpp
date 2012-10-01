#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Person {

  public:
    Person(const string& name) : _name(name)
    {
    }

    Person(const Person& other)
    {
      cout << "In Person copy constructor, setting _name = " << other._name << endl;
      this->_name = other._name;
    }

    Person& operator=(const Person& other)
    {
      if (this != &other)
      {
        cout << "In Person assignment operator, setting _name = " << other._name << endl;
        this->_name = other._name;
      }

      return *this;
    }

    virtual void sayHello()
    {
      cout << "I am a Person named " << _name << endl;
    }

  protected:
    string _name;
};

class Student : public Person
{
  public:
    Student(const string& name, const int grade) : Person(name), _grade(grade)
    {
    }

    Student(const Student& other) : Person(other)
    {
      cout << "In Student copy constructor, setting _grade = " << other._grade << endl;
      this->_grade = other._grade;
    }

    Student& operator=(const Student& other)
    {
      if (this != &other)
      {
        Person::operator=(other);
        cout << "In Student assignment operator, setting _grade = " << other._grade << endl;
        this->_grade = other._grade;
      }

      return *this;
    }

    virtual void sayHello()
    {
      cout << "I am a Student named " << _name << " and I'm in grade " << _grade << endl;
    }

  private:
    int _grade;
};

Student& getStudent()
{
  cout << endl << "In getStudent()" << endl;

  Student* s = new Student("Bobby", 1);
  s->sayHello();

  cout << endl << "Returning from getStudent()" << endl;
  return *s;
}

main()
{
  Student s("Jenny", 4);
  s.sayHello();

  Person& p = s;

  cout << endl << "Calling getStudent()" << endl;
  p = getStudent();

  cout << endl << "Back in main()" << endl;
  p.sayHello();
  s.sayHello();
}
