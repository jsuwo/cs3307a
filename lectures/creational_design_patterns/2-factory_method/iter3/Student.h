#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
  public:
    Student(const std::string& name) : _name(name)
    {
    }

    const std::string& name() const
    {
      return this->_name;
    }

    virtual void welcome() = 0;
    virtual void invoiceTuition() = 0;
    virtual void createTranscript() = 0;

  private:
    std::string _name;
};

#endif
