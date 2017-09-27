#include "Euler12.h"

int countDivisor(int n);


void Euler12::init()
{
	iter = 1;
	triNum = 0;
	add = 1;
}

void Euler12::mainLoop()
{
	triNum = iter*(iter + 1) / 2;

	iter++;
	
	if (countDivisor(triNum) >= 500)
	{
		setEnd(true);
	}
	
}

void Euler12::showResult()
{
	cout << triNum << endl;
}

int countDivisor(int n)
{
	int count = 1;
	int num = n;
	
	while (n % 2 == 0)
	{
		n = n / 2;
		//temp++;
	}
	//num_cal *= temp + 1;

	//2부터 루트n 까지 약수를 찾는다.
	for (int i = 2; i < sqrt(n); i++)
	{
		int cnt = 0;
		while (true)
		{
			if (num % i != 0) break;

			num = num / i;
			
			cnt++;//지수승
		}
		count *= (cnt + 1);
	}

	return count;
}

int num_div(int n)
{
	int num_cal = 1;
	int temp = 0;

	while (n % 2 == 0)
	{
		n = n / 2;
		temp++;
	}
	num_cal *= temp + 1;

	for (int k = 3; k < sqrt(n); k += 2)
	{
		temp = 0;
		while (n%k == 0)
		{
			n = n / k;
			temp++;
		}
		num_cal *= temp + 1;

		if (n == 1)
			break;
	}

	if (n != 1)
		num_cal *= 2;

	return num_cal;
}