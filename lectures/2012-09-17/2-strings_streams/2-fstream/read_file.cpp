#include <fstream>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::ifstream;
using std::string;

main() {
  ifstream in_file;
  string str;
  in_file.open("input.txt");
  
  if (in_file.fail())
  {
      cout << "Unable to open file" << endl;
  }
  else
  {
    in_file >> str;
    cout << "First word from file: " << str;
    in_file.close();
  }
}
