#include "stdHeader.h"
#include "Euler.h"
//#include "Euler1.h"
//#include "Euler2.h"
//#include "Euler3.h"
//#include "Euler4.h"
//#include "Euler5.h"
//#include "Euler6.h"
//#include "Euler7.h"
//#include "Euler8.h"
#include "Euler9.h"

using namespace std;

void main()
{
	DWORD stTime = timeGetTime();
	cout << "시작" << endl;

	Euler* Euler = new Euler9;

	Euler->init();

	while (!Euler->getEnd())
	{
		Euler->mainLoop();
	}
	Euler->showResult();

	float deltaTime = (timeGetTime() - stTime) / 1000.0;
	cout << "경과시간 : " << deltaTime <<endl;

	return;
}

