#pragma once
#include "Euler.h"

class Euler11 :	public Euler
{
private:
	int arr[20][20];
	int max;

public:
	Euler11() {};
	~Euler11() {};

	void init();
	void mainLoop();
	void showResult();
};

