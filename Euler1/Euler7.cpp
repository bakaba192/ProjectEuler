#include "Euler7.h"

void Euler7::init()
{
	_array = new int[10001];
	_index = 0;
	_prime = 2;//소수가 확실.
}

void Euler7::mainLoop()
{
	while (true)
	{
		if (isPrime(_prime))
		{
			_array[_index] = _prime;
			_index++;
		}

		_prime++;

		if (_index == 10001)
		{
			this->setEnd(true);
			break;
		}
	}
}

void Euler7::showResult()
{
	cout << "10001번째 소수 : " << _array[10000] << endl;
}

bool Euler7::isPrime(int prime)
{
	bool result = true;

	for (int i = 2; i <= sqrt(prime); i++)
	{
		//나누어 떨어진다
		if (prime % i == 0)
		{
			result = false;
		}
	}

	return result;
}
