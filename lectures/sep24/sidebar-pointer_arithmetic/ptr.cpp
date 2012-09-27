#include <iostream>

using std::cout;
using std::endl;

main()
{
  const char* s = "hello";
  const char* p = s;
  int len;

  for (len = 0; *p != '\0'; ++p, ++len)
    ;

  cout << "Length: " << len << endl;

  int numbers[5] = { 1, 2, 3, 4, 5 };

  int* n = numbers;
  int i = 0;

  while (i < 5)
    cout << *(n + i++) << endl;
}
