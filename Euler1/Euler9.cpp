#include "Euler9.h"
#include <cmath>

void Euler9::init()
{
	a = 0;
	b = 0;
	c = 0;
	max = 0;
}

void Euler9::mainLoop()
{
	for (int i = 1; i < 1000; i++)
	{
		a = i;
		b = (2000 * a - 1000 * 1000) / (2 * a - 2000);
		c = 1000 - a - b;

		if (a*a + b*b == c*c)
		{
			break;
		}
	}
	this->setEnd(true);
}

void Euler9::showResult()
{
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	cout << "c : " << c << endl;
	cout << "´ä : " << a*b*c << endl;
}
