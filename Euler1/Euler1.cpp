#include "Euler1.h"


void Euler1::init()
{
	cout << "input : ";
	cin >> input;

	cout << "div1 : ";
	cin >> div1;

	cout << "div2 : ";
	cin >> div1;

	//���� �ʱ�ȭ.
	sum = 0;
}

void Euler1::mainLoop()
{
	for (int i = input-1; i > 0; i--)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	this->setEnd(true);
}

void Euler1::showResult()
{
	cout << "input ���� ���� �ڿ��� �� div1 �Ǵ� div2�� ����� ��� ���� �� : " << sum << endl;
}