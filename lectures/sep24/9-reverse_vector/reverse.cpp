#include <algorithm>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::reverse;
using std::vector;

main()
{
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);

  reverse(v.begin(), v.end());

  for (int i = 0; i < v.size(); ++i)
    cout << v[i] << endl;
}
