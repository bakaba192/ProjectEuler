#pragma once
#include "Euler.h"
class Euler7 :	public Euler
{
private:

	int* _array;
	int _index;
	int _prime;
	

public:
	Euler7() {};
	~Euler7() {};

	void init();
	void mainLoop();
	void showResult();
	bool isPrime(int prime);
};

