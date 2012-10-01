#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

main()
{
  vector<int> numbers;

  numbers.push_back(4);
  numbers.push_back(3);

  cout << numbers[0] << endl;
  cout << numbers[1] << endl;

  numbers[0] += numbers[1];

  cout << numbers[0] << endl;
}
