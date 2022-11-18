
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include "windows.h"
using namespace std;
//ЗАДАЧА 1
/*int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x;
	float y;
	cout << "Введіть ціле значення х для розрахунку у: " << endl;
	cout << "х = ";
	cin >> x;
	y = x * 3 + pow(x, 3) - tan(x);
	cout << "y = " << y << endl;
	system ("pause");
}*/
//ЗАДАЧА 2
/*
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x, fin;
	cout << "Введіть ціле значення х для розрахунку рівняння: " << endl;
	cout << "х = ";
	cin >> x;
	fin = exp(x) - x - 2 + pow((1 + x), x);
	cout << "Значення рівняння = " << fin << endl;
	system("pause");
}*/
//ЗАДАЧА 3
/*int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float a, S, r, R, h;
	cout << "Введіть сторону рівносторонього трикутника для обчислення його площі, висоти та радіусів вписаного і описаного кіл: " << endl;
	cout << "Сторони а = ";
	cin >> a;
	R = ((sqrt(3)) / (3)) * a;
	r = ((sqrt(3)) / (6)) * a;
	h = ((sqrt(3)) / (2)) * a;
	S = 3 * sqrt(3) * pow(r, 2);
	cout << "R = " << R << endl;
	cout << "r = " << r << endl;
	cout << "h = " << h << endl;
	cout << "S = " << S << endl;
	system("pause");
}*/
//ЗАДАЧА 4
/*int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x,y,a,b,t;
	cout << "Введіть значення b i t для розрахунку у : " << endl;\
	cout << "b = ";
	cin >> b;
	cout << "t = ";
	cin >> t;
	a = pow(t, 2) * b;
	cout << "a = " << a << endl;
	x = pow(a - b, 1 / 3);
	cout << "х = " << x <<endl;
	y = a * cos(x) - b * sin(x);
	cout << "y = " << y << endl;
	system("pause");
}*/