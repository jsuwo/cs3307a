#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using std::ostream;
using std::istream;

class Rectangle
{
  public:
    Rectangle();
    Rectangle(int x, int y, int width, int height);

    friend ostream& operator<<(ostream& out, Rectangle& r);
    friend istream& operator>>(istream& in, Rectangle& r);

  private:
    int _x;
    int _y;
    int _width;
    int _height;

};

#endif
