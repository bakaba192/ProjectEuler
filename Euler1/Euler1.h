#pragma once
#include "Euler.h"
class Euler1 :	public Euler
{
private:
	int input;
	int div1;
	int div2;
	int sum;

public:
	Euler1() {}
	~Euler1() {}

	void init();
	void mainLoop();
	void showResult();
};

