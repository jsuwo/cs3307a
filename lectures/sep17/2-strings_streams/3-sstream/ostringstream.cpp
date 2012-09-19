#include <iostream>
#include <sstream>
#include <string>

using std::cout;
using std::endl;
using std::ostringstream;
using std::string;

main()
{
    int hours = 5;
    int minutes = 22; 

    ostringstream out_str;  // Analogous to Java's StringBuilder class

    out_str << hours << "h" << minutes << "m";
    string time = out_str.str();

    cout << "The time is " << time << endl;
}
