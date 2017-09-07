#include "Euler6.h"

void Euler6::init()
{
	sumOfPower = 0;
	powerOfSum = 0;
}

void Euler6::mainLoop()
{
	for (int i = 1; i <= 100; i++)
	{
		sumOfPower += pow(i,2);
		powerOfSum += i;
	}
	powerOfSum = pow(powerOfSum, 2);

	setEnd(true);
}

void Euler6::showResult()
{
	cout << "으아니! 차! : " << powerOfSum - sumOfPower << endl;
}
