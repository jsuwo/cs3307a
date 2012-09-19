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

//my middle name
int* dangerous(int a, int b)
{
	int c = 5;
	int d = 6;
	if (c > d)
	{
		return &c;
	}
	//returning a pointer to a variable local to this frame
	return &d;
}

main()
{
	cout << "Unsafe Pointer Example (Stack to Stack in later frames)" << endl;
	
	int *dangerValue = dangerous(5,6);
	cout << "Danger Value : " << *dangerValue << endl;
	cout << "Lots of stack operations going on… " << endl;
	int wastingTime = 5;
	int isFun= 6;
	
	for(int i = 0; i < 9000;i++)
	{
		max(wastingTime, isFun);
	}
	cout << "KABLOOMY!" << endl;
	cout << "Danger Value: " << *dangerValue << endl;
}
