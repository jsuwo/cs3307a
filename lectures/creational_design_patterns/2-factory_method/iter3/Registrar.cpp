#include <iostream>
#include <string>
#include "Registrar.h"
#include "Student.h"

using std::cout;
using std::endl;
using std::string;

void Registrar::admitStudent(const string& name)
{
  Student *s = this->createStudent(name);

  cout << "Admitting student " << s->name() << endl;

  // Each student type has its own admission operations
  s->welcome();
  s->invoiceTuition();
  s->createTranscript();

  cout << endl;
}
