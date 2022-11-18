#include <stdio.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include "windows.h"
#include <time.h>
#include <iomanip>
using namespace std;

// Lab 15
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	double i, mas[10], max = -10, min = 10;
	ofstream fout("massiv.dat");
	if (!fout) cout << "File error\n";
	for (int i = 0; i < 10; i++)
	{
		mas[i] = (rand() % 2000) / 100. - 10;;
		fout <<mas[i] <<" ";
	}
	fout.close();
	ifstream fin("massiv.dat");
	if (!fin) cout << "File error\n";
	cout << "Result: \n";
	for (int i = 0; i < 10; i++)
	{
		fin >> mas[i];
		if (mas[i] > max) max = mas[i];
		if (mas[i] < min) min = mas[i];
		cout << mas[i] << " ";
	}
	cout << "\n Максимум: " << max;
	cout << "\n Мінімум: " << min;
	cout << "\n Добуток макс*мін: " << max * min << endl;
	fin.close();
}*/
