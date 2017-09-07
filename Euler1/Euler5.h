#pragma once
#include "Euler.h"

//��Ŭ���� ȣ������ �����.
//�ִ����� = a*b/�ּҰ����(a,b)
//�ּҰ���� = a*b/�ִ�����(a,b)
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

	int gcd(int a, int b);//�ִ�����
	int lcm(int a, int b);//�ּҰ����
};