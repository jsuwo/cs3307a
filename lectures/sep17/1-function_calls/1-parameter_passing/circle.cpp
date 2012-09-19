#include "Circle.h"
#include <iostream>

using std::cout;
using std::endl;

const int Circle::PI = 3.14159;

Circle::Circle(double radius) {
  this->radius = radius;
}

void Circle::printSize()
{
	cout << "Radius: " << radius << " Area: " << area() << endl;	
}

double Circle::area() {
  return PI * radius * radius;
}

