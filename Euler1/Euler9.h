#pragma once
#include "Euler.h"
class Euler9 : public Euler
{
private:
	int max;

	int a, b, c;

public:
	Euler9() {}
	~Euler9() {}

	void init();
	void mainLoop();
	void showResult();
};

