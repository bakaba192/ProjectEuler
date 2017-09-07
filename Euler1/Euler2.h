#pragma once
#include "Euler.h"

#define MAX 4000000

class Euler2 : public Euler
{
private:
	int pivo1;
	int pivo2;
	int pivoNext;
	int sum;

public:
	Euler2() {}
	~Euler2() {}

	void init();
	void mainLoop();
	void showResult();
};

