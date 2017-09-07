#pragma once
#include "Euler.h"

//유클리드 호제법을 써야함.
//최대공약수 = a*b/최소공배수(a,b)
//최소공배수 = a*b/최대공약수(a,b)
class Euler5 : public Euler
{
private:
	
	int a, b, max;

public:
	Euler5() {};
	~Euler5() {};

	void init();
	void mainLoop();
	void showResult();

	int gcd(int a, int b);//최대공약수
	int lcm(int a, int b);//최소공배수
};