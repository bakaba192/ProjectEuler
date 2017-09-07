#include "Euler5.h"

void Euler5::init()
{
	a = 1;
	b = 2;
	max = 0;
}

void Euler5::mainLoop()
{
	a = lcm(a, b);
	b++;
	if (b == 20)
	{
		setEnd(true);
		max = a;
	}
}

void Euler5::showResult()
{
	cout <<"최소 공배수 : " <<max << endl;
}

int Euler5::gcd(int a, int b)
{
	while (b != 0)
	{
		int temp;
		temp = a%b;
		a = b;
		b = temp;
	}
	return a;
}

int Euler5::lcm(int a, int b)
{
	int result = a*b / gcd(a,b);
	return result;
}