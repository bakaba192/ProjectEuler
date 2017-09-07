#pragma once
#include "Euler.h"

class Euler4 : public Euler
{
private:
	int max, now;


public:
	Euler4() {};
	~Euler4() {};

	void init();
	void mainLoop();
	void showResult();
	bool isMirror(int num);

};