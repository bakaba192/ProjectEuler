#pragma once
#include "Euler.h"

//200만 이하의 소수의 합 문제
class Euler10 :	public Euler
{
private:
	bool result;

	int max;

	long long int sum;

public:
	Euler10() {};
	~Euler10() {};

	void init();
	void mainLoop();
	void showResult();
};

