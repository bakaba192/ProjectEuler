#pragma once
#include "Euler.h"
class Euler8 :	public Euler
{
private:
	fstream file;
	string token, str;
	int max;
public:
	Euler8() {};
	~Euler8() {};

	void init();
	void mainLoop();
	void showResult();

};

