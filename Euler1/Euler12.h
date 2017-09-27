#pragma once
#include "Euler.h"

//n번의 소인수분해?
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

