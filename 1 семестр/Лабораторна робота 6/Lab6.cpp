#include <stdio.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include "windows.h"
using namespace std;

//LAB 6
//Задача 1
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float ys = 0, y = 0, x = -2, h = 0.45;
	cout <<"Программа для розрахунку у при х [-2,6] з кроком 0.45: " <<endl;
	while (x <= 6) {
		y = (7 * x + 4 / 3 * x + 5) + cos(x);
		ys += y;
		cout << "y = " << y << " (при х = " << x << ")" << endl;
		y = 0;
		x += h;
	}
	cout << "Сума у = " << ys << endl;
	system("pause");
}*/
//Задача 2
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float se = 0, e , an, fin = 1;
	int i = 1, n;
	cout << "e = "; cin >> e;
	cout << "n = "; cin >> n;
	while (i <= (n + 1)) {
		fin *= i;
		i++;
	}
	an = fin / 2 * pow(n, n);
	cout << "an = " << an << endl;
	while (fabs(an) >= e) {
		se += an;
	}
	cout << "Сума усіх членів ряду, чий модуль >= e : "<< se << endl;
	system("pause");
}*/

//Задача 3
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	float x, sum = 0;
	cout << "Введіть n (Натуральне) = "; cin >> n;
	cout << "Введіть х (Дійсне) = "; cin >> x;
	while (n >= 0) {
		sum += pow(-1, n) * pow(x, n + 1) / pow(10, n + 1) * (n + 1);
		cout << sum << endl;
		n--;
	}
	while (n <= 0) {
		sum += pow(-1, n) * pow(x, n + 1) / pow(10, n + 1) * (n + 1);
		cout << sum << endl;
		n++;
	}
	cout << "Сумма числового ряду = " << sum << endl;
	system("pause");
}*/
//Задача 4
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	system("pause");
}
//Задача 5
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	system("pause");
}
//Задача 6

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	system("pause");
}*/