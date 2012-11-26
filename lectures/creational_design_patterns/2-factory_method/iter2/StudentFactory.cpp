#include <iostream>
#include <string>
#include "StudentFactory.h"
#include "Student.h"
#include "ComputerScienceStudent.h"
#include "ChemistryStudent.h"
#include "EngineeringStudent.h"
#include "MathStudent.h"

using std::cout;
using std::endl;
using std::string;

Student* StudentFactory::createStudent(const string& name, const string& dept)
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

  return s;
}
