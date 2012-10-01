#include "Rectangle.h"

using std::cout;
using std::cin;
using std::endl;

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int x, int y, int width, int height)
{
  this->_x = x;
  this->_y = y;
  this->_width = width;
  this->_height = height;
}

ostream& operator<<(ostream& out, Rectangle& r)
{
  out << "[" << r._x << "," << r._y << "," << r._width << "," << r._height << "]";
  return out;
}

istream& operator>>(istream& in, Rectangle& r)
{
  char c;

  in >> c; // Read the [
  in >> r._x;

  in >> c; // Read the ,
  in >> r._y;

  in >> c; // Read the ,
  in >> r._width;

  in >> c; // Read the ,
  in >> r._height;

  in >> c; // Read the ]
  return in;
}

main()
{
  Rectangle r1(10,20,300,400);
  Rectangle r2;

  cout << r1 << endl;
  
  cin >> r2;  // Expects user to enter rectangle in the format: [x,y,w,h]
  cout << r2 << endl;
    
}
