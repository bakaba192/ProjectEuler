#pragma once
#include "Euler.h"

//n���� ���μ�����?
//
class Euler12 :	public Euler
{
private:
	int iter;
	int triNum;
	int add;


public:
	Euler12() {};
	~Euler12() {};

	void init();
	void mainLoop();
	void showResult();
};

