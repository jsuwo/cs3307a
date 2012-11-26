#include <iostream>
#include <string>
#include "Registrar.h"
#include "Student.h"
#include "StudentFactory.h"

using std::cout;
using std::endl;
using std::string;

void Registrar::admitStudent(const string& name, const string& dept)
{
  Student *s;
  StudentFactory factory;

  s = factory.createStudent(name, dept);

  cout << "Admitting student " << s->name() << endl;

  // Each student type has its own admission operations
  s->welcome();
  s->invoiceTuition();
  s->createTranscript();

  cout << endl;
}
