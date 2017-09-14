#include "Euler7.h"

void Euler7::init()
{
	_array = new int[10001];
	_index = 0;
	_prime = 2;//�Ҽ��� Ȯ��.
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
	cout << "10001��° �Ҽ� : " << _array[10000] << endl;
}

bool Euler7::isPrime(int prime)
{
	bool result = true;

	for (int i = 2; i <= sqrt(prime); i++)
	{
		//������ ��������
		if (prime % i == 0)
		{
			result = false;
		}
	}

	return result;
}
