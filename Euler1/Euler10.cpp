#include "Euler10.h"

bool isPrime(int num);
bool* eratos(int max);

void Euler10::init()
{
	sum = 0;

	max = 2000000;//200��

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
	cout << "200�� ���� �Ҽ��� �� : "<< sum << endl;
}

//�̰� �̳� ������. ü�� �Ẹ��.
bool isPrime(int num)
{
	bool isPrime = true;
	int divide = 3;
	int numOrig = num;

	//�ڱ��ڽŸ��� ����� �����ų�(�Ҽ�)
	//����� ���� ������ ����������.
	while (true)
	{
		if (divide > sqrt(numOrig) || numOrig == 2)//�������� ����
		{
			break;
		}
		else if (num % divide == 0 || num == 0 || num == 1)//�������� �ƴ� ����
		{
			isPrime = false;
			break;
		}
		else//���� Ȯ�ε��� ���� ��� Ž��.
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
		//��� �迭�� true�� �ʱ�ȭ �ε��� 0�� 1�� ������� ����.
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