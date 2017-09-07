#include "Euler4.h"

void Euler4::init()
{
	max = 0;
}

void Euler4::mainLoop()
{
	for (int i = 100; i <= 999; i++)
	{
		for (int j = 100; j <= 999; j++)
		{
			if (isMirror(i*j))
			{
				if (max < i*j)
				{
					max = i*j;
				}
			}
		}
	}
	this->setEnd(true);
}

void Euler4::showResult()
{
	cout << "최대값 : " << max << endl;
}

//대칭수 찾기
bool Euler4::isMirror(int num)
{
	bool result = true;
	string num1 = to_string(num);

	int max = num1.length();

	for (int i = 0; i < max / 2; i++)
	{
		//인덱스의 처음과 끝을 비교
		if (num1[i] != num1[max - i - 1])
		{
			result = false;
			break;
		}
	}

	return result;
}
