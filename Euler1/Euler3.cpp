#include "Euler3.h"



void Euler3::init()
{
	//�ð�����
	cout << "ū�� �Է�";
	cin >> _input;

	_index = 2;
}

void Euler3::mainLoop()
{
	//�Ҽ����� �˻�
	if (findPrimes(_index))
	{
		cout << _index << endl;
		//�Է°��� �� �Ҽ��� �������ٸ�.
		while (_input % _index == 0 )
		{
			//��� ������
			_input /= _index;
		}
	}

	if (_input == 1)
	{
		this->setEnd(true);
		return;
	}

	_index++;
}

void Euler3::showResult()
{
	cout << "���� ū �Ҽ� : " << _index << endl;
}

//�ڽ��� �����ٺ��� ���� �Ҽ��� �ڽ��� ���� �������� ���� ���ٸ� �Ҽ�.
bool Euler3::findPrimes(unsigned long long int index)
{
	bool result = true;
	for (int i = 2; i < sqrt(index); i++)
	{
		if (index % i == 0)
		{
			result = false;
		}
	}
	return result;
}