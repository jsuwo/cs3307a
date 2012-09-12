#include <iostream>

using std::cout;
using std::endl;

struct employee
{
        char* name;
        int salary;
};

void print_employee(struct employee* e) {
        cout << "Name: " << e->name << ", Salary: " << e->salary << endl;
}

void give_raise(struct employee* e, float pct) {
        e->salary *= (1+pct);        
}

main() {
        struct employee e1;

        e1.name = "Bob";
        e1.salary = 30000;

        print_employee(&e1);
        give_raise(&e1, 0.1);
        print_employee(&e1);
}
