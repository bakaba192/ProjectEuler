#include "Euler10.h"

bool isPrime(int num);


void Euler10::init()
{
	sum = 0;

	max = 2000000;//200��

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
	cout << "200�� ���� �Ҽ��� �� : "<< sum << endl;
}

bool isPrime(int num)
{
	bool isPrime = true;
	int divide = 2;
	int numOrig = num;

	//�ڱ��ڽŸ��� ����� �����ų�(�Ҽ�)
	//����� ���� ������ ����������.
	while (true)
	{
		if (divide > sqrt(numOrig) || numOrig == 2)//�������� ����
		{
			break;
		}
		else if (num % divide == 0)//�������� �ƴ� ����
		{
			isPrime = false;
			break;
		}
		else//���� Ȯ�ε��� ���� ��� Ž��.
		{
			divide++;
		}
	}

	return isPrime;
}