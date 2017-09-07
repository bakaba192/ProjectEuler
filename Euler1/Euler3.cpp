#include "Euler3.h"



void Euler3::init()
{
	//시간측정
	cout << "큰수 입력";
	cin >> _input;

	_index = 2;
}

void Euler3::mainLoop()
{
	//소수인지 검사
	if (findPrimes(_index))
	{
		cout << _index << endl;
		//입력값이 이 소수로 나눠진다면.
		while (_input % _index == 0 )
		{
			//계속 나눠라
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
	cout << "가장 큰 소수 : " << _index << endl;
}

//자신의 제곱근보다 작은 소수로 자신을 나눠 나눠지는 수가 없다면 소수.
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