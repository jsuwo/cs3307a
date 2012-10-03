#include <iostream>

using std::cout;
using std::endl;

void printString(char* s)
{
  cout << s << endl;
}

main()
{
  const char* str = "Hello world";
  printString(str);  // compilation error
}

