#include "Euler2.h"

void Euler2::init()
{
	pivo1 = 1;
	pivo2 = 2;

	pivoNext = 0;
	sum = pivo2;
}

void Euler2::mainLoop()
{
	pivoNext = pivo1 + pivo2;
	pivo1 = pivo2;

	pivo2 = pivoNext;

	if (pivoNext > MAX)
	{
		setEnd(true);
		return;
	}

	if (pivoNext % 2 == 0)
		sum += pivoNext;
}

void Euler2::showResult()
{
	cout << "¦���̸鼭 4�鸸 ������ ��� �� : " << sum << endl;
}
