#pragma once
#include "Euler.h"

//200�� ������ �Ҽ��� �� ����
class Euler10 :	public Euler
{
private:
	bool result;

	int max;

	long long int sum;

	bool* eratos_arr;

public:
	Euler10() {};
	~Euler10() {};

	void init();
	void mainLoop();
	void showResult();
};

