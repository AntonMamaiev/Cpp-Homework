#include <stdio.h>
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>
#include "windows.h"
using namespace std;

//LAB 5
//Задача 1
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float f = 0;
	int x;
	cout << "Обчислення функції e^(1+x) * cos x на відрізку [1;4] з кроком 1" << endl;
	for (x = 1; x < 5; x++) {
		f += exp(x+1)*cos(x);
	}
	cout << "f(x) = " << f << endl;
	system("pause");
}*/
//Задача 2
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i;
	float S = 0, x;
	cout << "Введіть х для обчислення суми формули cos x / i, при і від 1 до 10 = " << endl << "x = "; cin >> x;
	for (i = 1; i < 11;i++)
	{
		S += cos(x) / i;
	}
	cout << "Сума = " << S << endl;
	system("pause");
}*/
//Задача 3
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float  n, P = 1;
	cout << "Введіть натуральне значення n (n>2), для обчислення Р :" << endl << "n = "; cin >> n;
	if (n > 2) {
		for (n; n >= 2; n--)
		{
			P *= (1 - (1 / pow(n, 2)));
		}
		cout << "P = " << P << endl;
	}
	else cout << "Помилка, введіть інше число n" << endl;
	system("pause");
}*/
//Задача 4
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float x, a1, alp, h, y;
	cout << "Дано: прямокутний трикутник з гіп = х і катетом = у;"<< endl << "      у = від 2 до 3 з кроком h;" << endl;
	cout << "Введіть число х і h для знаходження кута alpha:" << endl;
	cout << "x [м] = "; cin >> x;
	cout << "h [м] = "; cin >> h;
	if (x > 3) {
		for (y = 2; y <= 3; y += h) {
			a1 = acos(y / x);
			alp = a1 * 180 / M_PI;
			cout << "alpha = " << alp << "°" << endl;
		}
	}
	else cout << "Помилка, гіпотенуза (х) не може бути меншою за катет (у)" << endl;
	system("pause");
}*/
//Задача 5
/*
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n, i;
	float x, sum = 0, fin;
	cout << "Введіть натуральне число n (не більше 10) та дійсне х:" << endl;
	cout << "n = "; cin >> n; cout << "x = "; cin >> x;
	if (n < 11) {
		cout << "х у степені від 1 до n:" << endl;
		for (i = 1; i <= n; i++) {
			fin = pow(x, i);
			cout << fin << endl;
			sum += fin;
		}
		cout << "Сума цих квадратів = " << sum << endl;
	}
	else cout << "Помилка, введіть числа ще раз" << endl;
	system("pause");
}*/
