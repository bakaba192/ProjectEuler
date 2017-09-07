#pragma once
#include "stdHeader.h"

class Euler
{
private:
	bool end = false;

public:

	Euler() {}
	~Euler() {}

	virtual void init() {};
	virtual void mainLoop() {};
	virtual void showResult() {};

	bool getEnd() { return end; }
	void setEnd(bool isEnd) { end = isEnd; }

};