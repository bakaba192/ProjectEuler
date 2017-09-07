#include "Euler1.h"


void Euler1::init()
{
	cout << "input : ";
	cin >> input;

	cout << "div1 : ";
	cin >> div1;

	cout << "div2 : ";
	cin >> div1;

	//변수 초기화.
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
	cout << "input 보다 작은 자연수 중 div1 또는 div2의 배수를 모두 더한 값 : " << sum << endl;
}