#include <iostream>
#include <string>
#include "Registrar.h"
#include "Student.h"
#include "ComputerScienceStudent.h"
#include "ChemistryStudent.h"
#include "EngineeringStudent.h"
#include "MathStudent.h"

using std::cout;
using std::endl;
using std::string;

void Registrar::admitStudent(const string& name, const string& dept)
{
  Student *s;

  // Instantiate a concrete object -- violate 'program to an
  // interface, not an implementation'
  if (dept == "Computer Science") 
    s = new ComputerScienceStudent(name);
  else if (dept == "Chemistry")
    s = new ChemistryStudent(name);
  else if (dept == "Engineering")
    s = new EngineeringStudent(name);
  else if (dept == "Math")
    s = new MathStudent(name);

  // ...

  cout << "Admitting student " << s->name() << endl;

  // Each student type has its own admission operations
  s->welcome();
  s->invoiceTuition();
  s->createTranscript();

  cout << endl;
}
