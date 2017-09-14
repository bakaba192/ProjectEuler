#pragma once
#include "Euler.h"
class Euler8 :	public Euler
{
private:
	string str;
	fstream file;

public:
	Euler8() {};
	~Euler8() {};

	void init();
	void mainLoop();
	void showResult();

};

