// Example from http://www.cplusplus.com/reference/std/utility/pair/

#include <iostream>
#include <utility>
#include <string>

using namespace std;

int main()
{
  pair<string, double> product1("tomatoes", 3.25);
  pair<string, double> product2;
  pair<string, double> product3;

  product2.first = "lightbulbs";  // type of first is string
  product2.second = 0.99;         // type of second is double

  product3 = make_pair("shoes", 20.0);

  cout << "The price of " << product1.first << " is $" << product1.second << "\n";
  cout << "The price of " << product2.first << " is $" << product2.second << "\n";
  cout << "The price of " << product3.first << " is $" << product3.second << "\n";

  return 0;
}
