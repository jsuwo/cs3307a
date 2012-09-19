#include <iostream>
#include "circle.h"

using std::cout;
using std::endl;

void double1 (Circle c)
{
	c.radius*=2;
}

void double2 (Circle * p_c)
{
	p_c->radius*=2;	
}

void double3 (Circle &c)
{
	c.radius*=2;
}

main()
{
	//initialize the circle object	
	Circle myCircle(5);
	cout << "original" << endl;
	myCircle.printSize();

	//passing by value
	double1(myCircle);
	cout << "after double1():" << endl;
	myCircle.printSize();
	
	//passing by pointer
	double2(&myCircle);
	cout << "after double2():" << endl;
	myCircle.printSize();

	//passing by reference
	double3(myCircle);
	cout << "after double3():" << endl;
	myCircle.printSize();
}
