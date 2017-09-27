#include "Euler10.h"

bool isPrime(int num);
bool* eratos(int max);

void Euler10::init()
{
	sum = 0;

	max = 2000000;//200만

	result = false;
}

void Euler10::mainLoop()
{
	eratos_arr = eratos(max);

	for (int i = 0; i < max + 1; i++)
	{
		if (eratos_arr[i])
		{
			sum += i;
		}
	}


	this->setEnd(true);
}

void Euler10::showResult()
{
	cout << "200만 이하 소수의 합 : "<< sum << endl;
}

//이건 겁나 느리다. 체를 써보자.
bool isPrime(int num)
{
	bool isPrime = true;
	int divide = 3;
	int numOrig = num;

	//자기자신만을 약수로 가지거나(소수)
	//약수에 의해 완전히 나누어졌다.
	while (true)
	{
		if (divide > sqrt(numOrig) || numOrig == 2)//프라임일 조건
		{
			break;
		}
		else if (num % divide == 0 || num == 0 || num == 1)//프라임이 아닐 조건
		{
			isPrime = false;
			break;
		}
		else//아직 확인되지 않음 계속 탐색.
		{
			divide+=2;
		}
	}

	return isPrime;
}


bool* eratos(int max)
{
	bool* eratos = new bool[max + 1];

	eratos[0] = false;
	eratos[1] = false;

	for (int i = 2; i <= max; i++)
	{
		//모든 배열을 true로 초기화 인덱스 0과 1은 사용하지 않음.
		eratos[i] = true;
	}

	for (int i = 2; (i*i) <= max; i++)
	{
		if (eratos[i])
		{
			for (int j = i*i; j <= max; j += i) eratos[j] = false;
		}
	}

	return eratos;
}