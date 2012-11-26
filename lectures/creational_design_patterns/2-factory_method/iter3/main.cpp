#include <map>
#include <string>
#include "Registrar.h"
#include "ComputerScienceRegistrar.h"
#include "EngineeringRegistrar.h"
#include "MathRegistrar.h"

using std::map;
using std::string;

void enrollStudents(map<string, Registrar*>& registrars, map<string, string> studentsToEnroll)
{
  for (map<string, string>::iterator it = studentsToEnroll.begin(); it != studentsToEnroll.end(); ++it)
  {
    Registrar* registrar = registrars[it->second];
    registrar->admitStudent(it->first);
  }
}

main()
{
  // Still have to hard-code concrete classes somewhere
  // But, we'll use Registrar and Student throughout our
  // code as much as possible -- see enrollStudents()
  map<string, Registrar*> registrars;
  registrars["cs"] = new ComputerScienceRegistrar();
  registrars["eng"] = new EngineeringRegistrar();
  registrars["math"] = new MathRegistrar();

  map<string, string> studentsToEnroll;
  studentsToEnroll["Jeff"] = "cs";
  studentsToEnroll["Bob"] = "eng";
  studentsToEnroll["Jane"] = "math";

  enrollStudents(registrars, studentsToEnroll);
}

