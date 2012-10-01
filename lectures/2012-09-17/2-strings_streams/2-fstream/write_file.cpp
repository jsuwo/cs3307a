#include <fstream>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::ofstream;
using std::string;

main() {
  int year = 2012;
  ofstream out_file;
  out_file.open("output.txt");
  
  if (out_file.fail())
  {
      cout << "Unable to open file" << endl;
  }
  else
  {
    out_file << "Hello world!  The year is " << year << endl;
    out_file.close();
  }
}
