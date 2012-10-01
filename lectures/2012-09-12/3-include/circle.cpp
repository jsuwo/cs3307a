#include <iostream>
#include "Circle.h"

using std::cout;
using std::cin;
using std::endl;

const int Circle::PI = 3.14159;

Circle::Circle(double radius) {
  this->radius = radius;
}

double Circle::area() {
  return PI * radius * radius;
}

main() {
        int radius;

        cout << "Radius of the circle: ";
        cin >> radius;

        Circle c(radius);
        cout << "The area is approximately: " << c.area() << endl;
}
