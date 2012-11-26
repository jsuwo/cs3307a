#include "Manager.h"
#include "RegularEmployee.h"

main()
{
  Employee* dean = new Manager("Charmaine Dean");
  Employee* chair = new Manager("Hanan Lutfiyya");
  Employee* director = new Manager("Bruce Richards");
  Employee* emp1 = new RegularEmployee("Scott Feeney");
  Employee* emp2 = new RegularEmployee("Art Mulder");
  Employee* emp3 = new RegularEmployee("Jeff Shantz");

  dean->add(chair);
  chair->add(director);
  director->add(emp1);
  director->add(emp2);
  director->add(emp3);

  dean->print();
}
