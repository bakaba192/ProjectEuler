#include "Euler11.h"


void Euler11::init()
{
	max = 0;

	ifstream Txtopen;
	Txtopen.open("input.txt");
	for (int i = 0; i < 20; i++)
	{
		char str[256];
		char* context = NULL;
		Txtopen.getline(str, 256);
		char delimit[] = " \n\r\v\s\t";
		char* token = strtok_s(str, delimit, &context);
		
		int j = 0;
		
		arr[i][j] = atoi(str);
		for(j = 1; j < 20; j++)
		{
			token = strtok_s(NULL , delimit, &context);
			arr[i][j] = atoi(token);
		}
	}
	Txtopen.close();
}

void Euler11::mainLoop()
{
	//가로 검사
	for (int i = 0; i < 20 ; i++)
	{
		for (int j = 0; j < 20 - 3; j++)
		{
			int x = arr[i][j] * arr[i][j+1] * arr[i][j+2] * arr[i][j+3];
			if (max < x)
			{
				max = x;
			}
		}
	}
	//세로검사
	for (int i = 0; i < 20 - 3; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			int x = arr[i][j] * arr[i+1][j] * arr[i+2][j] * arr[i+3][j];
			if (max < x)
			{
				max = x;
			}
		}
	}
	// 대각선(좌상우하) 검사
	for (int i = 0; i < 20 - 3; i++)
	{
		for (int j = 0; j < 20 - 3; j++)
		{
			int x = arr[i][j] * arr[i + 1][j + 1] * arr[i + 2][j + 2] * arr[i + 3][j + 3];
			if (max < x)
			{
				max = x;
			}
		}
	}
	//대각선(우상좌하) 검사
	for (int i = 0; i < 20 - 3; i++)
	{
		for (int j = 3; j < 20 ; j++)
		{
			int x = arr[i][j] * arr[i + 1][j - 1] * arr[i + 2][j - 2] * arr[i + 3][j - 3];
			if (max < x)
			{
				max = x;
			}
		}
	}
	

	setEnd(true);
}

void Euler11::showResult()
{
	cout << max << endl;
}
