#pragma once
#include "Euler.h"


class Euler3 : public Euler
{
private:
	unsigned long long int _input;
	unsigned long long int _index;
	unsigned long long int _quotient;

public:
	Euler3() {}
	~Euler3() {}

	void init();
	void mainLoop();
	void showResult();
	bool findPrimes(unsigned long long int index);
};

