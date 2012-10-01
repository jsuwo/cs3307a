#include <iostream>

using std::cout;
using std::endl;

class Employee {

  public:

    Employee(char* name, int salary) {
      this->_name = name;         
      this->_salary = salary;
    };

    void print() {
      cout << "Name: " << this->_name << ", Salary: " << this->_salary << endl;
    }

    void give_raise(float pct) {
      this->_salary *= (1+pct);
    }

  private:

    char* _name;
    int _salary;

};

main() {
  Employee* e1 = new Employee("Bob", 30000);

  e1->print();
  e1->give_raise(0.1);
  e1->print();

  delete e1;
}
