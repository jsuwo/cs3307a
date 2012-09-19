#include <iomanip>
#include <iostream>

using std::cout;
using std::endl;
using std::hex;
using std::left;
using std::setfill;
using std::setprecision;
using std::setw;

main()
{
  cout << "1 + 1 = " << setw(5) << 2 << endl;
  cout << hex << 3735928559 << endl;

  cout << setprecision(4) << 3.14159 << endl;
  cout << setprecision(2) << 3.14159 << endl;

  cout << setw(49) << setfill('*') << '*' << endl;
  cout << "| First Name | Last Name | " << setw(21) << setfill(' ') << left << "Major" << "|" << endl;
  cout << "| " << setw(11) << "Joe" << "| " << setw(10) << "User" << "| " << setw(21) << "Computer Science" << "|" << endl;
  cout << "| " << setw(11) << "Jane" << "| " << setw(10) << "Doe" << "| " << setw(21) << "Computer Engineering" << "|" << endl;
  cout << setw(49) << setfill('*') << '*' << endl;
}
