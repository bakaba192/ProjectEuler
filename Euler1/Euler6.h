#pragma once
#include "Euler.h"

//�ŵ������� ����
class Euler6 :	public Euler
{
private:
	int sumOfPower;
	int powerOfSum;
public:
	Euler6() {}
	~Euler6() {}

	void init();
	void mainLoop();
	void showResult();
};

