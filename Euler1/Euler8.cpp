#include "Euler8.h"

void Euler8::init()
{
	max = 0;
	if (str.c_str() - '0' == "\0")
	{
		cout << str.c_str() - '0' << endl;
	}
	file.open("text.txt");

	
	while (!file.eof())
	{
		getline(file, token);
		str.append(token);
	}


	file.close();
}

void Euler8::mainLoop()
{
	for (int i = 0; i < str.size() - 4; i++)
	{
		int sum = 1;
		for (int j = i; j < i + 5; j++)
		{
			string sub = str.substr(j, 1);
			int x = atoi(sub.c_str());
			sum *= x;
		}
		//cout << sum << endl;

		if (sum > max)
		{
			max = sum;
		}
	}

	setEnd(true);
}

void Euler8::showResult()
{
	cout << max << endl;
}
