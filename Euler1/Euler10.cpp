#include "Euler10.h"

bool isPrime(int num);


void Euler10::init()
{
	sum = 0;

	max = 2000000;//200만

	result = false;
}

void Euler10::mainLoop()
{
	for (int i = 3; i < max; i++)
	{
		if (isPrime(i))
		{
			//cout << i << endl;
			sum += i;
		}
	}

	this->setEnd(true);
}

void Euler10::showResult()
{
	cout << "200만 이하 소수의 합 : "<< sum << endl;
}

bool isPrime(int num)
{
	bool isPrime = true;
	int divide = 2;
	int numOrig = num;

	//자기자신만을 약수로 가지거나(소수)
	//약수에 의해 완전히 나누어졌다.
	while (true)
	{
		if (divide > sqrt(numOrig) || numOrig == 2)//프라임일 조건
		{
			break;
		}
		else if (num % divide == 0)//프라임이 아닐 조건
		{
			isPrime = false;
			break;
		}
		else//아직 확인되지 않음 계속 탐색.
		{
			divide++;
		}
	}

	return isPrime;
}