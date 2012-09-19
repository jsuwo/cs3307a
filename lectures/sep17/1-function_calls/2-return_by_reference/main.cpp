#include <iostream>

using std::cout;
using std::endl;

int& max(int &x, int &y)
{
	if (x > y)
	{
		return x;
	}
	return y;	
}

main()
{
	cout << "Return by Reference Example" << endl;
	
	int a = 3, b = 5;

	cout << "max(a,b) = 10   a:" << a << " b:" << b << endl;

	max(a,b) = 10;

	cout << "a:" << a << " b:" << b << endl;
}
